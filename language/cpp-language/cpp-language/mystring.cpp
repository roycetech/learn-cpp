//
//  mystring.cpp
//  cpp-language
//
//  Created by Royce on 25/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <string>
#include <iostream>
#include "common.h"


using namespace std;


void mystring() {
    
    
    char* cstr = "C Style";
    
    string cpp_str = "Hello";

    //    Convert by apending a cpp style
    string to_cpp1 = cstr + cpp_str;
    //    Convert by apending casting
    string to_cpp2 = (string)cstr;
    
    cout << "Sample 1: " << to_cpp1 << endl;
    cout << "Sample 2: " << to_cpp2 << endl;
    
    if (nullptr) {
        cout << "nullptr is true!";
    } else {
        cout << "nullptr is FALSE!" << endl;
        
    }
    
    int x;
    int y=x=55;

    cout << y << endl;
    
}
