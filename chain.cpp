//
//  chain.cpp
//  335_assignment_1
//
//  Created by David Bohl on 2/5/15.
//  Purpose: to create and test a vector-like class called chain
//

#include "chain.h"
#include <iostream>

using namespace std;

//-------------------------------------------------------------
Chain::Chain(){
    dynamicArray = new int[max];
    length = 0;
}
//-------------------------------------------------------------
Chain::Chain(int _element){
    dynamicArray = new int[max];
    dynamicArray[0]=_element;
    length = 1;
}
//-------------------------------------------------------------
Chain::~Chain(){
    delete[] dynamicArray;
}
//-------------------------------------------------------------
Chain::Chain (const Chain & rhs){
    dynamicArray = new int [rhs.length];
    length = rhs.length;
    for (int i = 0; i < length; i++)
        dynamicArray[i] = rhs.dynamicArray[i];
}
//-------------------------------------------------------------
Chain& Chain::operator= (const Chain & rhs){
    if(this != &rhs){
        this->length = rhs.length;
        *dynamicArray = *rhs.dynamicArray;
        for (int i = 1; i < rhs.length; i++)
            dynamicArray[i] = rhs.dynamicArray[i];
    }
    return *this;
}
//-------------------------------------------------------------
Chain operator+ (const Chain &lhsChain, const Chain &rhsChain){
    Chain temp;
    temp.length = lhsChain.length + rhsChain.length;
    for (int i = 0; i < lhsChain.length; i++)
        temp.dynamicArray[i] = lhsChain.dynamicArray[i];
    for (int i = lhsChain.length; i < lhsChain.length+rhsChain.length; i++)
        temp.dynamicArray[i] = rhsChain.dynamicArray[i-lhsChain.length];
    return temp;
}
//-------------------------------------------------------------
ostream& operator<< (ostream& os, const Chain& _chain){
    for (int i = 0; i < _chain.length; i++)
        os << _chain.dynamicArray[i] << " ";
    return os;
}
//-------------------------------------------------------------
istream& operator>> (istream &_istream, Chain &_chain){
    int i = 0;
    while (cin.peek() != '\n') {
        _istream >> _chain.dynamicArray[i];
        i++;
    }
    _chain.length = i;
    cin.get();
    return _istream;
}
//-------------------------------------------------------------
int& Chain::operator [] (const int _index){
    return dynamicArray[_index];
}
//-------------------------------------------------------------
int Chain::getLength(){
    return length;
}
//-------------------------------------------------------------
Chain getChain(){
    Chain temp;
    cout << "please enter a sequence of numbers separated by spaces for getChain() " << endl;
    cin >> temp;
    return temp;
}
//-------------------------------------------------------------

