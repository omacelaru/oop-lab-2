//
// Created by macelaru on 06.04.2023.
//

#include "ContBancar.h"
#include "InvalidPin.h"
#include <iostream>

const std::string &ContBancar::getNume() const {
    return nume;
}

void ContBancar::setNume(const std::string &nume) {
    this->nume = nume;
}

float ContBancar::getSold() const {
    return sold;
}

void ContBancar::setSold(float sold) {
    this->sold = sold;
}

const std::string &ContBancar::getIban() const {
    return IBAN;
}

void ContBancar::setIban(const std::string &iban) {
    IBAN = iban;
}

float ContBancar::getPin() const {
    return pin;
}

void ContBancar::setPin(float pin) {
    ContBancar::pin = pin;
}

void ContBancar::depune(float suma) {
    sold += suma;
}

void ContBancar::retrage(float suma) {
    sold -= suma;

}

void ContBancar::verificareSold() const {
    std::cout << "Contul detine: " << this->sold << "\n";
}

void ContBancar::tipCONT() const {
    std::cout << "Sunt un simplu cont\n";
}

ContBancar::~ContBancar() {

}

ContBancar::ContBancar(const ContBancar &rhs) {
    nume = rhs.nume;
    IBAN = rhs.IBAN;
    pin = rhs.pin;
    sold = rhs.sold;
}

bool ContBancar::operator==(const ContBancar &rhs) const {
    return nume == rhs.nume &&
           IBAN == rhs.IBAN &&
           tip == rhs.tip &&
           pin == rhs.pin &&
           sold == rhs.sold;
}

bool ContBancar::operator!=(const ContBancar &rhs) const {
    return !(rhs == *this);
}

ContBancar::ContBancar(const std::string &nume, const std::string &iban, const std::string &tip, float pin, float sold)
        : nume(nume), IBAN(iban), tip(tip), pin(pin), sold(sold) {}

const std::string &ContBancar::getTip() const {
    return tip;
}

void ContBancar::setTip(const std::string &tip) {
    ContBancar::tip = tip;
}

bool ContBancar::verificaPin(float pin) const {
    if (this->pin == pin)
        return true;
    else {
        throw InvalidPin();
    }

}

std::ostream &operator<<(std::ostream &os, const ContBancar &bancar) {
    os << "nume: " << bancar.nume << " IBAN: " << bancar.IBAN << " tip: " << bancar.tip << " pin: " << bancar.pin
       << " sold: " << bancar.sold;
    return os;
}

