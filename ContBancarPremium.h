//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCARPREMIUM_H
#define OOP_CONTBANCARPREMIUM_H

#include <string>
#include "ContBancar.h"

class ContBancarPremium : public ContBancar {
public:
    ContBancarPremium(const std::string &nume, const std::string &iban, int pin, float sold);

    void tipCont() const override;
};


#endif //OOP_CONTBANCARPREMIUM_H
