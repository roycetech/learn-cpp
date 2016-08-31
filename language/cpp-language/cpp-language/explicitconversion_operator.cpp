//
//  explicitconversion_operator.cpp
//  cpp-language
//
//  Created by Royce on 27/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "common.h"


using namespace std;

class True {
public:
  explicit operator bool() {
    return true;
  };
  
};

void explicitconversion_operator() {

  True a, b;
//  if (a == b) {}             // error
  if ((bool)a == (bool)b) {} // allowed

  True b1;
  True b2;
  
  cout << true;
  cout << "Ecplicit Conversion: " << ((bool)b1 == (bool)b2) << endl;
  
  if (a) {} // allowed
}