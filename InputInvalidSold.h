//
// Created by macelaru on 08.04.2023.
//

#ifndef OOP_INPUTINVALIDSOLD_H
#define OOP_INPUTINVALIDSOLD_H

#include <exception>

class InputInvalidSold : public std::exception {
public:
    const char* what() const throw();
};



#endif //OOP_INPUTINVALIDSOLD_H
