//
// Created by macelaru on 07.04.2023.
//

#ifndef OOP_MENIU_H
#define OOP_MENIU_H

#include <vector>
#include <memory>
#include "ContBancar.h"
class Meniu {
public:
     std::vector<std::shared_ptr<ContBancar>> citireDate();
     void printMeniu()const;
     void printConturi(const std::vector<std::shared_ptr<ContBancar>>& conturi)const;
};


#endif //OOP_MENIU_H
