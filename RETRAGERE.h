//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_RETRAGERE_H
#define OOP_RETRAGERE_H

# include "TRANZACTIE.h"
# include "ContBancar.h"

class RETRAGERE : public TRANZACTIE {
private:
    ContBancar* cont;
public:
    RETRAGERE(int id, float suma, int pin, ContBancar *cont);

    ContBancar *getCont() const;

    void setCont(ContBancar *cont);

    bool operator==(const RETRAGERE &rhs) const;

    bool operator!=(const RETRAGERE &rhs) const;

    void executa() override;
};


#endif //OOP_RETRAGERE_H
