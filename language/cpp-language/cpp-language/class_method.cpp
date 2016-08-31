//
//  class_method.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>

#include "common.h"

class Math {
    
public:
    
    int abs(int);
};

int Math::abs(int number) {
    return number < 0 ? number * -1 : number;
}