//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCAR_H
#define OOP_CONTBANCAR_H

#include <string>
#include <ostream>
//
//#include "DEPUNERE.h"
//#include "RETRAGERE.h"
//#include "VerificareSold.h"


class ContBancar {
protected:
    std::string nume;
    std::string IBAN;
    std::string tip;
    float pin;
    float sold;

private:
    void depune(float suma);

    void retrage(float suma);

    void verificareSold() const;

public:
    friend class DEPUNERE;

    friend class RETRAGERE;

    friend class VerificareSold;

    void setTip1(const std::string &tip);

    ContBancar(const ContBancar &rhs);

    ContBancar(const std::string &nume, const std::string &iban, const std::string &tip, float pin, float sold);

    const std::string &getNume() const;

    float getSold() const;

    const std::string &getIban() const;

    void setIban(const std::string &iban);

    void setSold(float sold);

    void setNume(const std::string &nume);

    float getPin() const;

    void setPin(float pin);

    virtual void tipCONT() const;

    virtual ~ContBancar();

    bool operator==(const ContBancar &rhs) const;

    bool operator!=(const ContBancar &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const ContBancar &bancar);

    const std::string &getTip() const;

    void setTip(const std::string &tip);

    bool verificaPin(float pin) const;
};

#endif //OOP_CONTBANCAR_H
