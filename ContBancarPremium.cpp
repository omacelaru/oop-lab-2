//
// Created by macelaru on 06.04.2023.
//

#include "ContBancarPremium.h"
#include <iostream>
#include <string>

ContBancarPremium::ContBancarPremium(const std::string &nume, const std::string &iban, int pin, float sold)
        : ContBancar(nume, iban, pin, sold) {}

void ContBancarPremium::tipCont() const {
    std::cout << "Sunt un cont premium\n";
}