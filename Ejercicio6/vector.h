//
// Created by rcarb on 11/04/2020.
//

#ifndef EJERCICIO6_VECTOR_H
#define EJERCICIO6_VECTOR_H

#include "tipos.h"

namespace utec
{
    class vector
    {
    public:
        int* data;
        size_t size;
        size_t capacity;
    public:
        vector();
        vector(const vector& other);
        vector(size_t size);
        ~vector();
        vector& operator=(const vector& other);
        vector operator+(const vector& other);
        void push_back(int n);
        void pop_back();
        void insert(size_t index, int n);
        void erase(size_t index);
    };
}


#endif //EJERCICIO6_VECTOR_H
