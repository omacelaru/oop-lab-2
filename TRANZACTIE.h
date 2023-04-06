//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_TRANZACTIE_H
#define OOP_TRANZACTIE_H

# include <string>

class TRANZACTIE {
protected:
    static int numar_tranzactii;
    int id;
    float suma;
    int pin;

public:
    TRANZACTIE(int id, float suma, int pin);

    static int getNumarTranzactii();

    int getId() const;

    void setId(int id);

    static void setNumarTranzactii(int numarTranzactii);

    float getSuma() const;

    void setSuma(float suma);

    bool operator==(const TRANZACTIE &rhs) const;

    bool operator!=(const TRANZACTIE &rhs) const;

    virtual void executa() = 0;

    int getPin() const;

    void setPin(int pin);
};


#endif //OOP_TRANZACTIE_H
