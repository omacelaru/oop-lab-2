//
// Created by macelaru on 06.04.2023.
//

#include "VerificareSold.h"

VerificareSold::VerificareSold(int id, float suma, int pin, ContBancar *cont) : TRANZACTIE(id, suma, pin), cont(cont) {}

bool VerificareSold::operator==(const VerificareSold &rhs) const {
    return static_cast<const TRANZACTIE &>(*this) == static_cast<const TRANZACTIE &>(rhs) &&
           cont == rhs.cont;
}

bool VerificareSold::operator!=(const VerificareSold &rhs) const {
    return !(rhs == *this);
}

void VerificareSold::executa() {
    cont->verificareSold(pin);
}

VerificareSold::~VerificareSold() {

}
