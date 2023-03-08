#include "mbed.h"

DigitalOut myled(LED1);

int main()
{
    while (1)
    {
        // letter A
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(3s);
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(1s);
        myled = 1;  // set LED1 pin to high
        ThisThread::sleep_for(1s);
        
        // switch
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(1s);
        myled = 1;  // set LED1 pin to high
        ThisThread::sleep_for(1s);
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(3s);
        
        //figure 1
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(3s);
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(1s);
        myled = 1;  // set LED1 pin to high
        ThisThread::sleep_for(1s);

        //figure 2
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(3s);
        myled = 1;  // set LED1 pin to high
        ThisThread::sleep_for(1s);
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(1s);

        // space
        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(3s);
    }
}
