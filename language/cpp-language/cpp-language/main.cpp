//
//  main.cpp
//  cpp-language
//
//  Created by Royce on 24/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <iostream>
#include "common.h"
#include "class_method.h"
#include <string>

using namespace std;


class Egg {
  
public:
  
  Egg(int day) {
    this->day = day;
  }
  
  Egg() {
    Egg(0);
  }
  
  
private:
  int day;
  
};


class Rectangle {
  
public:
  
  Rectangle(int x, int y) {
    height = y;
    width = x;
  }
  
  virtual int getHeight() {
    cout << "Base class getHeight() " << endl;
    return height;
  }
  
  int getWidth() {
    return width;
  }
  
private:
  int height;
  int width;
  
};

class Square : public Rectangle {
public:
  Square(int side) : Rectangle(side, side), side(side){};
  
  int getHeight() override {
    cout << "Derived class getHeight() " << endl;
    return side;
    };
    
  private:
    int side;
    
    };
    
    class RoundedSquare: public Square {
    public:
      RoundedSquare(int side, int radius): Square(side), radius{radius} {};
      
      int getRadius() {
        return radius;
      }
      
    private:
      int radius;
    };
    
    
    const string sep = "-------------------------------------------------";

    int sum() { return 0; } // end condition
  
    template<class T0, class ... Ts>
    decltype(auto) sum(T0 first, Ts ... rest)
    {
      return first + sum(rest ...);
    }

    
    void printTitle(string title) {
      cout << endl << endl << sep;
      cout << endl << title << endl;
    }
    
    int main(int argc, const char * argv[]) {
      
      
      //    cout << "Data Types:" << endl;
      //    datatype();
      
      //    cout << "String:" << endl;
      //    mystring();
      
      //    cout << "Scratch:" << endl;
      //    scratchmain();
      
      //      cout << "Lambda:" << endl;
      //      lambdamain();
    
      printTitle("Lambda By Val");
      lambda_capture_byval();
      
      printTitle("Lambda By Ref");
      lambda_capture_byref();
      
      Math math;
      
      cout << endl << "Static Method: " << math.abs(-99) << endl;
      
      cout << endl << "Class Initializationd: -------------------- " << endl;
      init_class();
      
      
      const Egg& a = Egg();
      Egg&& b = Egg();
      
      Square square(9);
      Rectangle& upsquare = square;
      cout << "Square: " << square.getHeight() << endl;
      cout << "Up Casted Square: " << upsquare.getHeight() << endl;
      
      
      RoundedSquare roundedSquare(9, 3);
      cout << "Rounded Square: " << roundedSquare.getRadius() << endl;
      
      
      printTitle("Struct");
      struct_main();

      
      printTitle("Union");
      union_main();
      
      printTitle("Operator Overloading");
      operoverloading_main();

      printTitle("Implicit Conversion");
      implicitconversion_main();

      string input;
      cout << endl << "enter something: ";
      std::cin >> input;
      cout << endl << input << endl;
      cout << endl << "enter another: ";
      char c = std::cin.get();
      cout << endl << "char entered: " << c << endl;

      printTitle("Template Specialization");
      tplspecialization_main();

      printTitle("Variadic");
      cout << "Sum of 1-5 " << sum(1, 2, 3, 4, 5) << endl;

      
      return 0;
    }
