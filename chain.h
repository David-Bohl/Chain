//
//  chain.h
//  335_assignment_1
//
//  Created by David Bohl on 2/5/15.
//  Purpose: to create and test a vector-like class called chain
//

#ifndef ___35_assignment_1__chain__
#define ___35_assignment_1__chain__

#include <iostream>
using namespace std;

#endif /* defined(___35_assignment_1__chain__) */


class   Chain{
    
public:
    
    //zero parameter constructor
    Chain();
    
    //one parameter constructor, takes in a single element to insert into Chain
    Chain(int _element);
    
    //destructor to free up dynamically allocated memory
    ~Chain();
    
    //copy constructor. Takes in a Chain, and creates new Chain that is a copy of it
    Chain (const Chain & rhs);
    
    //copy assignment operator.  Takes in a chain, and copies it to an existing Chain
    Chain& operator= (const Chain & rhs);
    
    //overloaded operator + .  Takes in two Chains, and returns a new Chain which is Chain one
    //plus Chain two
    friend Chain operator+ (const Chain &lhsChain, const Chain &rhsChain);
    
    //overloaded operator << .  Takes in an ostream to the left, and a Chain to the right.
    //Prints the Chain on the screen
    friend ostream& operator<< (ostream& os, const Chain& _chain);
    
    //overloaded operator >> .  Takes in an istream to the left, and a Chain to the right.
    //writes user input to the Chain
    friend istream& operator>> (istream &_istream, Chain &_chain);
    
    //overloaded operator [] .  Takes in an int, which is used as the index for dynamicArray
    int& operator [] (const int _index);

    // returns the length of the Chain it is called on
    int getLength();
    
    
private:
    int length;
    int max = 50;
    int *dynamicArray;
};

//stand alone function, prompts user to input a Chain with cin, and returns that Chain by value
Chain getChain();

