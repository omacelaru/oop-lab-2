//
// Created by macelaru on 04.04.2023.
//

#include "RETRAGERE.h"

ContBancar *RETRAGERE::getCont() const {
    return cont;
}

void RETRAGERE::setCont(ContBancar *cont) {
    RETRAGERE::cont = cont;
}

bool RETRAGERE::operator==(const RETRAGERE &rhs) const {
    return static_cast<const TRANZACTIE &>(*this) == static_cast<const TRANZACTIE &>(rhs) &&
           cont == rhs.cont;
}

void RETRAGERE::executa() {
    cont->retrage(suma,pin);
}

bool RETRAGERE::operator!=(const RETRAGERE &rhs) const {
    return !(rhs == *this);
}

RETRAGERE::RETRAGERE(int id, float suma, int pin, ContBancar *cont) : TRANZACTIE(id, suma, pin), cont(cont) {}

