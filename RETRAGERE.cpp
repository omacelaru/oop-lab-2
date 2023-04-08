//
// Created by macelaru on 04.04.2023.
//

#include "RETRAGERE.h"
#include "RetragereInvalida.h"

bool RETRAGERE::operator==(const RETRAGERE &rhs) const {
    return static_cast<const TRANZACTIE &>(*this) == static_cast<const TRANZACTIE &>(rhs) &&
           cont == rhs.cont;
}

void RETRAGERE::executa() {
    if (cont->getSold() < suma)
        throw RetragereInvalida();
    else {
        cont->retrage(suma);
    }
}

bool RETRAGERE::operator!=(const RETRAGERE &rhs) const {
    return !(rhs == *this);
}

RETRAGERE::RETRAGERE(int id, float suma, int pin, std::shared_ptr<ContBancar> cont) : TRANZACTIE(id, suma, pin),
                                                                                      cont(cont) {}

RETRAGERE::~RETRAGERE() {

}

