//
//  overloading.cpp
//  cpp-language
//
//  Created by Royce on 27/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>
#include "common.h"
#include <iostream>
#include <ostream>

using namespace std;


class MyNum {
  
public:
  
  MyNum(int i):num(i) {}
  
  int operator+ (MyNum num) {
    return this->num + num.num;
  }
  
  MyNum operator++(int) {
    MyNum t = MyNum(num);
    ++num;
    return t;
  }
  
  friend ostream& operator<<(ostream& os, const MyNum& mynum)
  {
    os << mynum.num;
    return os;
  }
  
private:
  int num;
  
};


class MySquare {
public:
  MySquare(int size): size{size} {
    cout << "1 >>>> " << size << endl;
  };
  friend ostream& operator<<(ostream& os, const MySquare& square) {
    cout << "2 square>>>> " << square.size;
    os << square.size;
    return os;
  }
private:
  int size;
};

void operoverloading_main() {
  
  MyNum num1(1);
  MyNum num2(2);
  
  cout << "Binary Operator" << endl;
  cout << num1 + num2 << endl;

  cout << "Unary Post Operator" << endl;
  num1++;
  cout << "Num1: " << num1 << endl;
  
  
  MySquare square(3);
  cout << "Square: " << square << endl;
  
}

