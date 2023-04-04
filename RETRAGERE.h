//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_RETRAGERE_H
#define OOP_RETRAGERE_H

# include "TRANZACTIE.h"

class RETRAGERE : public TRANZACTIE {
private:
    int pin;
public:
    void inregistrareRetragere() override;

    int getPin() const;

    void setPin(int pin);
};


#endif //OOP_RETRAGERE_H
