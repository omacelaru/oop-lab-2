//
// Created by macelaru on 06.04.2023.
//

#include "ContBancarTineret.h"
#include <iostream>
ContBancarTineret::ContBancarTineret(const std::string &nume, const std::string &iban, int pin, float sold)
        : ContBancar(nume, iban, pin, sold) {}

void ContBancarTineret::tipCont() const {
    std::cout << "Sunt un cont de tineret\n";
}
