/*
>>>Arbol<<<

main() -> llama a smartHomeSystemUpdate() de smart_home_system.h

smartHomeSystemUpdate() -> llama a lightSystemUpdate() de lightSystemUpdate()

lightSystemUpdate() -> llama a lightLevelControlRead()
                    -> llama a temperatureLevelControlRead()
                    -> llama a lightLevelControlRead()
                    -> llama a setDutyCycle()

lightLevelControlRead() -> lee el valor analógico del pote con el metodo read() del objeto potenciómetro

setDutyCycle(X,duty) -> setea el valor del dutycicle del pin X

*/

//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}