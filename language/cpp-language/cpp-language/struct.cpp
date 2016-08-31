//
//  struct.cpp
//  cpp-language
//
//  Created by Royce on 27/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include "struct.hpp"
#include <string>
#include <iostream>
#include "common.h"

using namespace std;


void struct_main() {

  struct Person {
    string name;
  };

  // 1. Declarator List
  Person p1, p2;
  
  p1.name = "Royce";
  p2.name = "World";
  
  cout << "Person 1 " << p1.name << endl;
  cout << "Person 2 " << p2.name << endl;
  
  // 2. object declarations, with a method.
  struct Point {
    Point(): Point(0, 0) {};
    Point(int x, int y): x(x), y(y) {};
    
    string getPoint() {
      return "Point " + to_string(x) + ", " + to_string(y);
    };
    
  private:
    int x, y;
  } point1, point2(1, 2);
  
  cout << point1.getPoint() << endl;
  cout << point2.getPoint() << endl;
  
  
  // 3. Aggregate initialization
  Point point3 = { 2, 3 };
  cout << point3.getPoint() << endl;

  // 4. Uniform initialization
  Point point4 { 3, 4 };
  cout << point4.getPoint() << endl;
  

}


