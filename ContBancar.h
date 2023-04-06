//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCAR_H
#define OOP_CONTBANCAR_H

#include <string>
//
//#include "DEPUNERE.h"
//#include "RETRAGERE.h"
//#include "VerificareSold.h"

class ContBancar {
private:
    std::string nume;
    std::string IBAN;
    int pin;
    float sold;

    void depune(float suma, int pin);

    void retrage(float suma, int pin);

    float verificareSold(int pin) const;

public:
    friend class DEPUNERE;
    friend class RETRAGERE;
    friend class VerificareSold;


    const std::string &getNume() const;

    float getSold() const;

    const std::string &getIban() const;

    void setIban(const std::string &iban);

    void setSold(float sold);

    bool operator==(const ContBancar &rhs) const;

    bool operator!=(const ContBancar &rhs) const;

    void setNume(const std::string &nume);

    int getPin() const;

    void setPin(int pin);

    ContBancar(const std::string &nume, const std::string &iban, int pin, float sold);

    virtual void tipCont() const;
};

#endif //OOP_CONTBANCAR_H
