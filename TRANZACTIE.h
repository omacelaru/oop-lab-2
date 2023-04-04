//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_TRANZACTIE_H
#define OOP_TRANZACTIE_H

# include <string>

class TRANZACTIE {
private:
    static int numar_tranzactii;
protected:
    float suma;
    std::string iban;
public:
    virtual void inregistrareDepunere() = 0;

    virtual void inregistrareRetragere() = 0;

    float getSuma() const;

    void setSuma(float suma);
};


#endif //OOP_TRANZACTIE_H
