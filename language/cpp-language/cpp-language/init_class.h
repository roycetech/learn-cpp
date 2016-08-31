//
//  init_class.h
//  cpp-language
//
//  Created by Royce on 26/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#ifndef init_class_h
#define init_class_h


class MyClass {
  
public:
  MyClass() = default;
  MyClass(int p_x);
  
  void hello();
  
  
private:
  int field;
};


#endif /* init_class_h */
