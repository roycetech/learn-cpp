//
//  templatespecialization_main.cpp
//  cpp-language
//
//  Created by Royce on 28/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include "common.h"
#include <iostream>


template<class T>
class Box {
public:
  T a;
  void print() { std::cout << a << std::endl; }
};

template<>
class Box<bool>
{
public:
  bool a;
  void print() { std::cout << (a ? "true" : "false"); }
};


void tplspecialization_main () {
  using namespace std;
  
  Box<bool> b;
  b.print();
  
}