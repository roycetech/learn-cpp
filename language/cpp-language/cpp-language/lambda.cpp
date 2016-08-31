//
//  lambda.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <string>
#include <iostream>
#include "common.h"


using namespace std;


void call(int arg, function<void(int)> func) {
    func(arg);
}

void lambdamain() {

    
    // 1. Simple lambda declaration
    auto printSquare = [](int x) { cout << x*x; };
    call(2, printSquare); // "4"

    
    // 2. Immediately invoked lambda.
    [](string message) mutable {
        cout << message << endl;
    }("Beep beep");
    
    
    
    

}


