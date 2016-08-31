//
//  lambda_capture_byval.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include "common.h"


using namespace std;


void call(function<void()> func) {
  func();
}

void lambda_capture_byval() {
    int i = 2;
    int j = 3;

    
    // 1.
    auto printSquare = [i]() {
        cout << "Square: " << i*i << endl;
    };
    call(printSquare);  // "4"

    
    // 2. = inside the [=] means unspecified variables are captured byval.
    auto printCube = [=]() {
        cout << "Cube: " << i*i*i << endl;
    };
    call(printCube);  // "8"

    
    // 3. ByVal by default, mixed with reference.
    auto printSum = [=, &j]() {
        cout << "Sum: " << i + j << endl;
    };
    call(printSum);  // "8"
    
    // 4. ByVal but modifiable inside the block by using mutable
    int a = 1, b = 1;
    [a, b]() mutable { b++; a += b; }();
    cout << "Mutable a: " << a << ", b: " << b << endl; // "3 1"
    
}
