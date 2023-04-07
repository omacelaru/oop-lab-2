//
// Created by macelaru on 06.04.2023.
//

#include "ContBancarTineret.h"
#include <iostream>


ContBancarTineret::ContBancarTineret(const std::string &nume, const std::string &iban, const std::string &tip,
                                     float pin, float sold) : ContBancar(nume, iban, tip, pin, sold) {}

void ContBancarTineret::tipCONT() const {
    std::cout << "Sunt un cont de tineret\n";
}

ContBancarTineret::~ContBancarTineret() {

}