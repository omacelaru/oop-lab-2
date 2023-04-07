//
// Created by macelaru on 04.04.2023.
//

#include "DEPUNERE.h"



bool DEPUNERE::operator==(const DEPUNERE &rhs) const {
    return static_cast<const TRANZACTIE &>(*this) == static_cast<const TRANZACTIE &>(rhs) &&
           cont == rhs.cont;
}

bool DEPUNERE::operator!=(const DEPUNERE &rhs) const {
    return !(rhs == *this);
}

void DEPUNERE::executa() {
    cont->depune(suma,pin);
}

DEPUNERE::DEPUNERE(int id, float suma, int pin, ContBancar *cont) : TRANZACTIE(id, suma, pin), cont(cont) {}

DEPUNERE::~DEPUNERE() {

}
