//
// Created by rcarb on 11/04/2020.
//

#include "Integer.h"

Integer::Integer(){}

Integer::Integer(int value) {
    this->value = value;
}

Integer::Integer(const Integer& other) {
    this->value = other.value;
}

Integer& Integer::operator=(const Integer& other) {
    this->value = other.value;
    return *this;
}

Integer Integer::operator+(int value) {
    return this->value + value;
}

Integer Integer::operator-(int value) {
    return this->value - value;
}

Integer Integer::operator+=(int value) {
    return this->value += value;
}

Integer Integer::operator-=(int value) {
    return this->value -= value;
}

Integer Integer::operator*(int value) {
    return this->value * value;
}

Integer Integer::operator*=(int value) {
    return this->value *= value;
}

Integer Integer::operator/(int value) {
    return this->value / value;
}

Integer Integer::operator^(int value) {
    return pow(this->value, value);
}

bool Integer::operator>(int value) {
    return this->value > value;
}

bool Integer::operator<(int value) {
    return this->value < value;
}

bool Integer::operator>=(int value) {
    return this->value >= value;
}

bool Integer::operator<=(int value) {
    return this->value <= value;
}

bool Integer::operator==(int value) {
    return this->value == value;
}

bool Integer::operator!=(int value) {
    return this->value != value;
}

Integer::operator int() {
    return value;
}

ostream& operator <<(ostream& os, const Integer& n) {
    return os << n.value;
}

istream& operator >>(istream& os, Integer& n) {
    return os >> n.value;
}
