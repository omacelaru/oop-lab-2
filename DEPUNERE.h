//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_DEPUNERE_H
#define OOP_DEPUNERE_H

# include "TRANZACTIE.h"
# include "ContBancar.h"

class DEPUNERE : public TRANZACTIE {
private:
    ContBancar* cont;
public:

    DEPUNERE(int id, float suma, int pin, ContBancar *cont);

    ContBancar *getCont() const;

    void setCont(ContBancar *cont);

    bool operator==(const DEPUNERE &rhs) const;

    bool operator!=(const DEPUNERE &rhs) const;

    void executa() override;
};


#endif //OOP_DEPUNERE_H
