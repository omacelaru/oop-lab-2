//
// Created by macelaru on 06.04.2023.
//

#include "ContBancar.h"
#include <iostream>

const std::string &ContBancar::getNume() const {
    return nume;
}

void ContBancar::setNume(const std::string &nume) {
    ContBancar::nume = nume;
}

float ContBancar::getSold() const {
    return sold;
}

void ContBancar::setSold(float sold) {
    ContBancar::sold = sold;
}

bool ContBancar::operator==(const ContBancar &rhs) const {
    return nume == rhs.nume &&
           IBAN == rhs.IBAN &&
           sold == rhs.sold;
}

bool ContBancar::operator!=(const ContBancar &rhs) const {
    return !(rhs == *this);
}

const std::string &ContBancar::getIban() const {
    return IBAN;
}

void ContBancar::setIban(const std::string &iban) {
    IBAN = iban;
}

int ContBancar::getPin() const {
    return pin;
}

void ContBancar::setPin(int pin) {
    ContBancar::pin = pin;
}

void ContBancar::depune(float suma, int pin) {
    if(this->pin == pin)
        sold += suma;
}

void ContBancar::retrage(float suma, int pin) {
    if(this->pin == pin)
        sold -= suma;

}

float ContBancar::verificareSold(int pin) const {
    if(this->pin == pin)
        return this->sold;
    else
        return -1;
}

ContBancar::ContBancar(const std::string &nume, const std::string &iban, int pin, float sold) : nume(nume), IBAN(iban),
                                                                                                pin(pin), sold(sold) {}

void ContBancar::tipCont() const {
    std::cout << "Sunt un simplu cont\n";
}
