//
// Created by macelaru on 04.04.2023.
//

#include "TRANZACTIE.h"

int TRANZACTIE::numar_tranzactii = 0;

int TRANZACTIE::getNumarTranzactii() {
    return numar_tranzactii;
}

void TRANZACTIE::setNumarTranzactii(int numarTranzactii) {
    numar_tranzactii = numarTranzactii;
}

float TRANZACTIE::getSuma() const {
    return suma;
}

void TRANZACTIE::setSuma(float suma) {
    this->suma = suma;
}

bool TRANZACTIE::operator==(const TRANZACTIE &rhs) const {
    return suma == rhs.suma;
}

bool TRANZACTIE::operator!=(const TRANZACTIE &rhs) const {
    return !(rhs == *this);
}

TRANZACTIE::TRANZACTIE(int id, float suma, float pin) : id(id), suma(suma), pin(pin) {numar_tranzactii++;}

int TRANZACTIE::getId() const {
    return id;
}

void TRANZACTIE::setId(int id) {
    this->id = id;
}

TRANZACTIE::~TRANZACTIE() {

}
