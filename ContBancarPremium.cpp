//
// Created by macelaru on 06.04.2023.
//

#include "ContBancarPremium.h"
#include <iostream>
#include <string>


void ContBancarPremium::tipCONT() const {
    std::cout << "Sunt un cont premium\n";
}

ContBancarPremium::~ContBancarPremium() {

}

ContBancarPremium::ContBancarPremium(const std::string &nume, const std::string &iban, const std::string &tip,
                                     float pin, float sold) : ContBancar(nume, iban, tip, pin, sold) {}

