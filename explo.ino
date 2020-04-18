// Include Libraries
#include "Arduino.h"
#include "DCMotor.h"
#include "Servo.h"


// Pin Definitions
#define DCMotor_1_PIN_COIL1  5
#define DCMotor_2_PIN_COIL1 6
#define SERVO360MICRO1_1_PIN_SIG  2
#define SERVO360MICRO2_2_PIN_SIG  3
#define SERVO360MICRO3_3_PIN_SIG  4
#define SERVO360MICRO4_4_PIN_SIG  7



// Global variables and defines

// object initialization
DCMotor dcMotor_1(DCMOTOR_1_PIN_COIL1);
DCMotor dcMotor_2(DCMOTOR_2_PIN_COIL1);
Servo servo360Micro1_1;
Servo servo360Micro2_2;
Servo servo360Micro3_3;
Servo servo360Micro4_4;


// define vars for testing menu
const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    
    menuOption = menu();
    
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
    
    
    if(menuOption == '1') {
    // DC Motor - Hobby Motor Gear #1 - Test Code
    // The DC motor will turn on and off for 4000ms (4 sec)
    dcMotor_1.on(200);                        // 1. turns on
    else if(menuOption == '2') {
    // DC Motor - Hobby Motor Gear #2 - Test Code
    // The DC motor will turn on and off for 4000ms (4 sec)
    dcMotor_1.off();                       // 3. turns off                        // 4. waits 4000 milliseconds (4 sec). change the value in the brackets (4000) for a longer or shorter delay
    dcMotor_2.on(200);                        // 1. turns on
    delay(4000);                             // 2. waits 4000 milliseconds (4 sec). change the value in the brackets (4000) for a longer or shorter delay.
    dcMotor_2.off();                       // 3. turns off
    delay(4000);                             // 4. waits 4000 milliseconds (4 sec). change the value in the brackets (4000) for a longer or shorter delay.

    }
    else if(menuOption == '3') {
    // Continuous Rotation Micro Servo - FS90R #1 - Test Code
    // The servo will rotate CW in full speed, CCW in full speed, and will stop  with an interval of 2000 milliseconds (2 seconds) 
    servo360Micro1_1.attach(SERVO360MICRO1_1_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    servo360Micro1_1.write(180);  // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(20000);                              // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro1_1.write(0);    // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro1_1.write(90);    // 6. sending 90 stops the servo 
    delay(2000);                              // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro1_1.detach();                    // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    servo360Micro2_2.attach(SERVO360MICRO2_2_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    servo360Micro2_2.write(180);  // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro2_2.write(0);    // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro2_2.write(90);    // 6. sending 90 stops the servo 
    delay(2000);                              // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro2_2.detach();                    // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '4') {
    // Continuous Rotation Micro Servo - FS90R #3 - Test Code
    // The servo will rotate CW in full speed, CCW in full speed, and will stop  with an interval of 2000 milliseconds (2 seconds) 
    servo360Micro3_3.attach(SERVO360MICRO3_3_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    servo360Micro3_3.write(180);  // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro3_3.write(0);    // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro3_3.write(90);    // 6. sending 90 stops the servo 
    delay(2000);                              // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro3_3.detach();                    // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress. 
    servo360Micro4_4.attach(SERVO360MICRO4_4_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    servo360Micro4_4.write(180);  // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro4_4.write(0);    // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
    delay(2000);                              // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro4_4.write(90);    // 6. sending 90 stops the servo 
    delay(2000);                              // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
    servo360Micro4_4.detach();                    // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    
    if (millis() - time0 > timeout)
    {
        menuOption = menu();
    }
    
}



// Menu function for selecting the components to be tested
// Follow serial monitor for instrcutions
char menu()
{

    Serial.println(F("\nWhich component would you like to test?"));
    Serial.println(F("(1) DC Motor - Hobby Motor Gear #1"));
    Serial.println(F("(2) DC Motor - Hobby Motor Gear #2"));
    Serial.println(F("(3) Continuous Rotation Micro Servo - FS90R #1"));
    Serial.println(F("(4) Continuous Rotation Micro Servo - FS90R #2"));
    Serial.println(F("(5) Continuous Rotation Micro Servo - FS90R #3"));
    Serial.println(F("(6) Continuous Rotation Micro Servo - FS90R #4"));
    Serial.println(F("(menu) send anything else or press on board reset button\n"));
    while (!Serial.available());

    // Read data from serial monitor if received
    while (Serial.available()) 
    {
        char c = Serial.read();
        if (isAlphaNumeric(c)) 
        {   
            
            if(c == '1') 
          Serial.println(F("Now Testing DC Motor - Hobby Motor Gear #1"));
        else if(c == '2') 
          Serial.println(F("Now Testing DC Motor - Hobby Motor Gear #2"));
        else if(c == '3') 
          Serial.println(F("Now Testing Continuous Rotation Micro Servo - FS90R #1"));
        else if(c == '4') 
          Serial.println(F("Now Testing Continuous Rotation Micro Servo - FS90R #2"));
        else if(c == '5') 
          Serial.println(F("Now Testing Continuous Rotation Micro Servo - FS90R #3"));
        else if(c == '6') 
          Serial.println(F("Now Testing Continuous Rotation Micro Servo - FS90R #4"));
            else
            {
                Serial.println(F("illegal input!"));
                return 0;
            }
            time0 = millis();
            return c;
        }
    }
}
