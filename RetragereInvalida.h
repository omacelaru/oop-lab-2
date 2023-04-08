//
// Created by macelaru on 08.04.2023.
//

#ifndef OOP_RETRAGEREINVALIDA_H
#define OOP_RETRAGEREINVALIDA_H

#include <exception>
class RetragereInvalida : public std::exception {
public:
    const char* what() const throw();
};


#endif //OOP_RETRAGEREINVALIDA_H
