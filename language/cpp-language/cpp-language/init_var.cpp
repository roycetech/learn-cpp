//
//  Initialization.cpp
//  cpp-language
//
//  Created by Royce on 24/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <iostream>

using namespace std;


void initx() {
  
  int myvar1 = 50;  // standard
  int myvar2 (50);  // constructor
  int myvar3 {60};  // constructor
  int myvar4 = 1, myvar5 = 2;  // Multiple
  
  cout << "myvar1: " << myvar1 << endl;
  cout << "myvar2: " << myvar2 << endl;
  cout << "myvar3: " << myvar3 << endl;
  cout << "myvar4: " << myvar4 << endl;
  cout << "myvar5: " << myvar5 << endl;
  
  
  int    var1 = 1.2;      // Precision is lost.
  double var2 {45};       // General form of assignment
  double var3 = {0.25};   // General form of assignment
  auto   var4 = "Royce";  // Automatic type resolution.
  int var5(2.2);          // Precision is lost.
  int var6{var5};          // Error
  
  cout << "var1: " << var1 << endl;
  cout << "var2: " << var2 << endl;
  cout << "var3: " << var3 << endl;
  cout << "var4: " << var4 << endl;
  cout << "var5: " << var5 << endl;
  cout << "var6: " << var6 << endl;
  
}
