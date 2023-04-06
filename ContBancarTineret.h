//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCARTINERET_H
#define OOP_CONTBANCARTINERET_H

#include "ContBancar.h"

class ContBancarTineret : public ContBancar{
public:
    void tipCont() const override;

    ContBancarTineret(const std::string &nume, const std::string &iban, int pin, float sold);

};


#endif //OOP_CONTBANCARTINERET_H
