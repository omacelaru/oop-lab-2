//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_CONTBANCARTINERET_H
#define OOP_CONTBANCARTINERET_H

#include "ContBancar.h"

class ContBancarTineret : virtual public ContBancar{
public:
    void tipCONT() const override;

    ContBancarTineret(const std::string &nume, const std::string &iban, const std::string &tip, float pin, float sold);

    ~ContBancarTineret() override;

};


#endif //OOP_CONTBANCARTINERET_H
