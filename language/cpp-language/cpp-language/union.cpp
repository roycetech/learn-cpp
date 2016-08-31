//
//  union.cpp
//  cpp-language
//
//  Created by Royce on 27/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include "common.h"
#include <iostream>

using namespace std;


static union {
  int global_union_i;
};

void union_main() {
  union Mix {
    char c[4];
    struct{
      short hi, lo;
    } s;
    int i;
  } m;
  m.i = 0xFF00F00F;
  
  cout << "Form1: " << m.c[0] << endl;
  cout << "Form1: " << m.c[1] << endl;
  cout << "Form1: " << m.c[2] << endl;
  cout << "Form1: " << m.c[3] << endl;
  cout << "Form2: " << m.s.lo << endl;
  cout << "Form2: " << m.s.hi << endl;
  cout << "Form3: " << m.i << endl;
  
  
  // Anonymous union
  union { short s6; }; // defines an unnamed union object
  s6 = 15;
  
}

