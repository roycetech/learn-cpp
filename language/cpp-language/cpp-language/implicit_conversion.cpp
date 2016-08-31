//
//  implicit_conversion.cpp
//  cpp-language
//
//  Created by Royce on 27/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include "common.h"
#include <iostream>


class Number {
public:
  Number(int num): num(num) {};
  int num;
};

void implicitconversion_main() {
  namespace x = std;
  
  Number num = 9;
  x::cout << "Num: " << num.num;
  
  
  // type alias
  typedef Number MyNum;
  
  MyNum numA = 8;
  x::cout << "NumA: " << numA.num;
  
}