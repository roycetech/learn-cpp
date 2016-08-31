//
//  init_class.cpp
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include "init_class.h"
#include "common.h"
#include <iostream>

using namespace std;


MyClass::MyClass(int x) {
  this->field = x;
}


void init_class() {
  
  // Copy initialization.  All three prooducing separate object instances.
  MyClass a = MyClass();
  MyClass b(a);
  MyClass c = b;
  
  cout << "Address of a: " << &a << endl;
  cout << "Address of b: " << &b << endl;
  cout << "Address of c: " << &c << endl;
  
}

