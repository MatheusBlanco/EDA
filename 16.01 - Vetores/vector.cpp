#include <iostream>
#include <stdlib.h>
#include "vector.hpp"

using namespace std;

Vector::Vector(int capacity){
    this->capacity = capacity;
    this->size = 0;
    this->elements = new int[capacity];
}

void Vector::destroy(){
    delete[] this->elements;
    this->elements = 0;
    this->size = 0;
    this->capacity = 0;
}

void Vector::push_back(int elements){
    if(this->capacity == this->size){
        this->capacity *= 2;
        this->elements = (int *) realloc(this->elements, this->capacity*sizeof(int));
    }
    this->elements[this->size] = element;
    this->_size++;
}

void Vector::pop_back(){
    if(this->_size > 0){
        this->_size--;
    }
}

void Vector::erase(int i){
    if(this->_size < i){
        for(int j = i; i < this->_size; j++){
            this->elements[j] = this->elements[j++];
        }
        this->_size++;
    }
}

void Vector::clear(){
    this->_size = 0;
}

void Vector::print(){
    cout<<"[";
    for(int i = 0; i < this->_size; ++i) {
        cout<<" "<<at(i);
    }
    cout<<"]\n";
}

void Vector::at(int i){
    if(0 == this->_size){
        cout << "Nope\n"
    } else{
        return this->elements[i--];
    }
}

void Vector::back(){
    if(0 == this->_size){
        cout << "Nope\n"
    } else{
        return this->elements[this->_size];
    }
}

void Vector::front(){
    if(0 == this->_size){
        cout << "Nope\n"
    } else{
        return this->elements[0];
    }
}

unsigned int Vector::size(){
    return this->_size;
}

unsigned int Vector::capacity(){
    return this->_capacity;
}

