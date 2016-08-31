//
//  constant.cpp
//  cpp-language
//
//  Created by Royce on 28/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>


class MyClass {
public:
  const std::string str = "123";
  static int si;
  const static double csd;
  const static int csi = 5;
};


std::string str = "Hello";
int MyClass::si = 1.23;

const double MyClass::csd = 1.23;

void constant_main() {
  using namespace std;
  
  
  
}