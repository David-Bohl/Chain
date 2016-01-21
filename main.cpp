//
//  main.cpp
//  335_assignment_1
//
//  Created by David Bohl on 2/5/15.
//  Purpose: to create and test a vector-like class called chain
//

#include "chain.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){

    Chain a, b, c;
    
    Chain d(10);
    
    cout << "The contents of Chain d is: " << endl;
    cout << d << endl;
    
    cout << "The length of Chain a is:" << endl;
    cout << a.getLength() << endl;
    
    cout<<"please enter a sequence of numbers separated by spaces, for chain a"<<endl;
    cin >> a;
    
    cout << "The contents of Chain a is: " << endl;
    cout << a << endl;
    
    cout<<"please enter a sequence of numbers separated by spaces, for chain b"<<endl;
    cin >> b;
    
    c=a;
    
    cout << "The contents of Chain c after copy assignment is: " << endl;
    cout << c << endl;
    
    cout << "the contents of a + b is: " << endl;
    cout << a+b << endl;
    
    cout << "The contents of Chain a + 5 is: " << endl;
    cout << a + 5 << endl;
    
    Chain e(c);
    
    cout << "Chain e, constructed as a copy of c: " << endl;
    cout << e << endl;
    
    cout << "Chain a[1] contains: " << endl;
    cout << a[1] << endl;
    
    c[1]=100;
    
    cout << "Chain c after changing c[1]: " << endl;
    cout << c << endl;
    
    cout << "Chain e again, after c has been changed: " << endl;
    cout << e << endl;
    
    Chain f = getChain();
    
    cout << "getChain() returned the following Chain: " << endl;
    cout << f << endl;
 
    
    return 0;
}

