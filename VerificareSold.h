//
// Created by macelaru on 06.04.2023.
//

#ifndef OOP_VERIFICARESOLD_H
#define OOP_VERIFICARESOLD_H

# include "TRANZACTIE.h"
# include "ContBancar.h"

class VerificareSold : public TRANZACTIE{
private:
    ContBancar* cont;
public:

    VerificareSold(int id, float suma, int pin, ContBancar *cont);


    bool operator==(const VerificareSold &rhs) const;

    bool operator!=(const VerificareSold &rhs) const;

    void executa() override;

    ~VerificareSold() override;


};


#endif //OOP_VERIFICARESOLD_H
