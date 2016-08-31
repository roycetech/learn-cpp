//
//  Scratch.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;



void print(string arg, function<void(string)> func) {
    func(arg);
}

void scratchmain() {
    
    int array[5] = {1, 2, 3, 4};
    
    cout << "test" << array << endl;
    
    int a[3] = {1, 2, 3};
    for (int &i: a) {
        cout << i << endl;
    }
    
    
    cout << typeid(1.1L).name() << '\n';
    
    
    auto lambda = [](string param) {cout << param << endl;};
    print("Hello World", lambda);
    
    
}
