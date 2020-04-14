//
// Created by rcarb on 11/04/2020.
//

#ifndef EJERCICIO5_NUMBER_H
#define EJERCICIO5_NUMBER_H

#include "tipos.h"

template <typename T>
class Number
{
    T value;
public:
    // constructores
    Number() {}
    Number(T value) {
        this->value = value;
    }
    Number(const Number& other) {
        this->value = other.value;
    }
    // operadores
    Number<T>& operator=(const Number& other) {
        this->value = other.value;
        return *this;
    }

    Number<T> operator+(T value) {
        return this->value + value;
    }

    Number<T> operator-(T value) {
        return this->value - value;
    }

    Number<T> operator+=(T value) {
        return this->value += value;
    }

    Number<T> operator-=(T value) {
        return this->value -= value;
    }

    Number<T> operator*(T value) {
        return this->value * value;
    }

    Number<T> operator*=(T value) {
        return this->value *= value;
    }

    Number<T> operator/(T value) {
        return this->value / value;
    }

    Number<T> operator^(T value) {
        return pow(this->value, value);
    }

    bool operator>(T value) {
        return this->value > value;
    }

    bool operator<(T value) {
        return this->value < value;
    }

    bool operator>=(T value) {
        return this->value >= value;
    }

    bool operator<=(T value) {
        return this->value <= value;
    }

    bool operator==(T value) {
        return this->value == value;
    }

    bool operator!=(T value) {
        return this->value != value;
    }

    template <typename U>
    friend ostream& operator <<(ostream& os, const Number<U>& n) {
        return os << n.value;
    }

    template <typename U>
    friend istream& operator >>(istream& os, Number<U>& n) {
        return os >> n.value;
    }

    operator T() {
        return value;
    }

};

#endif //EJERCICIO5_NUMBER_H
