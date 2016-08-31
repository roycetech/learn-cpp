//
//  Vector.cpp
//  cpp-language
//
//  Created by Royce on 24/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>

class Vector {
    
public:
    Vector(int s):elem {new double[s]}, sz{s} { }
    double& operator[](int i) {
        return elem[i];
    }
    int size() {
        return sz;
    }
    
private:
    double* elem; // pointer to the elements
    int sz; // the number of elements
    // construct a Vector
    // element access: subscripting
};


int vector() {
    
    Vector v(6);
    
    printf("%d\n", v.size());
    
    return 0;
}