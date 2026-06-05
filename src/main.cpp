#include <Arduino.h>
#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define IR_PIN D7

#define TRIG_PIN D6
#define ECHO_PIN D5

#define SERVO_PIN D4

LiquidCrystal_I2C lcd(0x3F, 16, 2);
Servo myServo;

int bananaCount = 0;
int orangeCount = 0;
int appleCount = 0;

float getDistance()
{
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);

    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH, 30000);

    if(duration == 0)
        return -1;

    return duration * 0.0343 / 2.0;
}

void showReadyScreen()
{
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Fruit Sorting");

    lcd.setCursor(0,1);
    lcd.print("System Ready");
}

void updateLCD(String fruit)
{
    int total =
        bananaCount +
        orangeCount +
        appleCount;

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Fruit:");
    lcd.print(fruit);

    lcd.setCursor(0,1);
    lcd.print("Total:");
    lcd.print(total);
}

void printStatistics()
{
    Serial.println();
    Serial.println("===== STATISTICS =====");

    Serial.print("BANANA : ");
    Serial.println(bananaCount);

    Serial.print("ORANGE : ");
    Serial.println(orangeCount);

    Serial.print("APPLE  : ");
    Serial.println(appleCount);

    Serial.print("TOTAL  : ");
    Serial.println(
        bananaCount +
        orangeCount +
        appleCount);

    Serial.println("======================");
}

void setup()
{
    Serial.begin(115200);
       Wire.begin(D2, D1);
    pinMode(IR_PIN, INPUT);

    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    myServo.attach(SERVO_PIN);
    myServo.write(90);

    lcd.init();
    lcd.backlight();

    showReadyScreen();

    Serial.println("FRUIT SORTING SYSTEM");
}

void loop()
{
    bool detected =
        digitalRead(IR_PIN) == LOW;

    if(detected)
    {
        delay(300);

        float distance =
            getDistance();

        Serial.println();
        Serial.println("---------------------");

        Serial.print("Distance: ");
        Serial.print(distance);
        Serial.println(" cm");

        if(distance < 10)
        {
            Serial.println("BANANA");

            bananaCount++;

            updateLCD("Banana");

            myServo.write(30);
            delay(1000);
        }
        else if(distance < 20)
        {
            Serial.println("ORANGE");

            orangeCount++;

            updateLCD("Orange");

            myServo.write(90);
            delay(1000);
        }
        else
        {
            Serial.println("APPLE");

            appleCount++;

            updateLCD("Apple");

            myServo.write(150);
            delay(1000);
        }

        myServo.write(90);

        printStatistics();

        while(digitalRead(IR_PIN) == LOW)
        {
            delay(50);
        }

        delay(1000);

        showReadyScreen();
    }
}