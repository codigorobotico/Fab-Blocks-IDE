#include <Arduino.h>
#line 1 "D:\\Proyectos\\modulinoQt\\extracted_code.ino"
#include <Modular.h>

/***   Global variables   ***/
digitalOutput name(0);

/***   Function declaration   ***/

#line 8 "D:\\Proyectos\\modulinoQt\\extracted_code.ino"
void setup();
#line 15 "D:\\Proyectos\\modulinoQt\\extracted_code.ino"
void loop();
#line 8 "D:\\Proyectos\\modulinoQt\\extracted_code.ino"
void setup()
{
    name.init();

}


void loop()
{
    name.write(HIGH);

}

/***   Function definition   ***/
