//
// Created by rcarb on 11/04/2020.
//

#ifndef EJERCICIO5_INTEGER_H
#define EJERCICIO5_INTEGER_H

#include "tipos.h"

class Integer
{
    int value;
public:
    // constructores
    Integer();
    Integer(int value);
    Integer(const Integer& other);
    // operadores
    Integer& operator=(const Integer& other);
    Integer operator+(int value);
    Integer operator-(int value);
    Integer operator+=(int value);
    Integer operator-=(int value);
    Integer operator*(int value);
    Integer operator*=(int value);
    Integer operator/(int value);
    Integer operator^(int value);
    bool operator>(int value);
    bool operator<(int value);
    bool operator>=(int value);
    bool operator<=(int value);
    bool operator==(int value);
    bool operator!=(int value);
    operator int();
    friend ostream& operator <<(ostream& os, const Integer&);
    friend istream& operator >>(istream& os, Integer&);
};



#endif //EJERCICIO5_INTEGER_H
