//
// Created by macelaru on 08.04.2023.
//

#ifndef OOP_INVALIDPIN_H
#define OOP_INVALIDPIN_H

#include <exception>
class InvalidPin : public std::exception{
public:
    const char* what() const throw();
};


#endif //OOP_INVALIDPIN_H
