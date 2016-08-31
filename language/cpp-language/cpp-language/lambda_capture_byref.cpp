//
//  lambda_capture_byref.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include "common.h"


using namespace std;


void call1(function<void()> func) {
  func();
}

void lambda_capture_byref() {
  
    int i = 2;
  
    // 1. ByReference by using the reference operator.
    auto square = [&i]() {
        i *= i;
    };
  
    call1(square);
    cout << "ByRef square: " << i << endl;
    
    // 2. = inside the [&] means unspecified variables are captured byref.
    int j = 2;
    auto printCube = [&]() {
        j=j*j*j;
    };
    call1(printCube);  // "8"
    cout << "ByRef cube: " << j << endl;

    
    // 3. ByRef with additional initialization C++14
    int k = 2;
    auto plusFive = [&k, l=5]() {
        k += l;
    };
    call1(plusFive);  // "7"
    cout << "ByRef plus 5: " << k << endl;
    
    
    
        
}

