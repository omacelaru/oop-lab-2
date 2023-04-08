//
// Created by macelaru on 06.04.2023.
//

#include "VerificareSold.h"

VerificareSold::VerificareSold(int id, int pin, std::shared_ptr<ContBancar>cont) : TRANZACTIE(id, 0, pin), cont(cont) {}

bool VerificareSold::operator==(const VerificareSold &rhs) const {
    return static_cast<const TRANZACTIE &>(*this) == static_cast<const TRANZACTIE &>(rhs) &&
           cont == rhs.cont;
}

bool VerificareSold::operator!=(const VerificareSold &rhs) const {
    return !(rhs == *this);
}

void VerificareSold::executa() {
    cont->verificareSold();
}

VerificareSold::~VerificareSold() {

}
