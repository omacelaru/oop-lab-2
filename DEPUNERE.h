//
// Created by macelaru on 04.04.2023.
//

#ifndef OOP_DEPUNERE_H
#define OOP_DEPUNERE_H

# include "TRANZACTIE.h"

class DEPUNERE : public TRANZACTIE {
public:
    void inregistrareDepunere() override;
};


#endif //OOP_DEPUNERE_H
