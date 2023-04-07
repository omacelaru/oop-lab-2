//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCARPREMIUM_H
#define OOP_CONTBANCARPREMIUM_H

#include <string>
#include "ContBancar.h"

class ContBancarPremium : virtual public ContBancar {
public:
    ContBancarPremium(const std::string &nume, const std::string &iban, int pin, int tip, float sold);

    ContBancarPremium(const std::string &nume, const std::string &iban, const std::string &tip, float pin, float sold);

    void tipCONT() const override;

    ~ContBancarPremium() override;
};


#endif //OOP_CONTBANCARPREMIUM_H
