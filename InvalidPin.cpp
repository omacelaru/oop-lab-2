//
// Created by macelaru on 08.04.2023.
//

#include "InvalidPin.h"

const char *InvalidPin::what() const throw() {
    return "\nAi introdus un pin gresit\nVei fi delogat din cont\n";
}
