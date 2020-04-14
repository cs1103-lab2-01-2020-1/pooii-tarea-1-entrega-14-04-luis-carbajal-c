//
// Created by rcarb on 11/04/2020.
//

#include "vector.h"

namespace utec
{
    vector::vector() {
        data = new int[1];
        size = 0;
        capacity = 1;
    }

    vector::vector(const vector& other) {
        size = other.size;
        capacity = other.capacity;
        data = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    vector::vector(size_t size) {
        this->size = size;
        this->capacity = (size == 0? 1 : size);
        this->data = new int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    vector::~vector() {
        delete[] data;
    }

    vector& vector::operator=(const vector& other) {
        size = other.size;
        capacity = other.capacity;
        delete[] data;
        data = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        return *this;
    }

    vector vector::operator+(const vector& other) {
        vector tvector(size + other.size);
        for (size_t i = 0; i < size; ++i) {
            tvector.data[i] = data[i];
        }
        size_t i = 0;
        for (size_t j = size; j < size + other.size; ++j) {
            tvector.data[j] = other.data[i];
            i++;
        }
        return tvector;
    }

    void vector::push_back(int n) {
        if (size == capacity) {
            capacity *= 2;
            int* tdata = new int[capacity];
            for (size_t i = 0; i < size; ++i) {
                tdata[i] = data[i];
            }
            delete[] data;
            data = tdata;
        }
        data[size++] = n;
    }

    void vector::pop_back() {
        if (size == 0) return;
        vector tvector(size - 1);
        for (size_t i = 0; i < size - 1; ++i) {
            tvector.data[i] = data[i];
        }
        *this = tvector;
    }

    void vector::insert(size_t index, int n) {
        if (size == capacity) {
            capacity *= 2;
            int* tdata = new int[capacity];
            for (size_t i = 0; i < size; ++i) {
                tdata[i] = data[i];
                delete[] data;
                data = tdata;
            }
        }
        for (size_t i = size; i > index ; --i) {
            data[i] = data[i-1];
        }
        ++size;
    }

    void vector::erase(size_t index) {
        for (size_t i = index; i < size-1; ++i) {
            data[i] = data[i+1];
        }
        --size;
    }
}