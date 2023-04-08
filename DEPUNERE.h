//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_DEPUNERE_H
#define OOP_DEPUNERE_H

# include "TRANZACTIE.h"
# include "ContBancar.h"


class DEPUNERE : public TRANZACTIE {
private:
    std::shared_ptr<ContBancar> cont;
public:

    DEPUNERE(int id, float suma, float pin, std::shared_ptr<ContBancar> cont);

    bool operator==(const DEPUNERE &rhs) const;

    bool operator!=(const DEPUNERE &rhs) const;

    void executa() override;

    ~DEPUNERE() override;
};


#endif //OOP_DEPUNERE_H
