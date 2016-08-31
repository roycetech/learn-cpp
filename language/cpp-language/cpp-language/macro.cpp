//
//  macro.cpp
//  cpp-language
//
//  Created by Royce on 28/04/2016.
//  Copyright © 2016 UPI Creations. All rights reserved.
//

#include <stdio.h>


// Macro followed by the recommended constant.

//#define DEBUG 0
const bool DEBUGX = 0;


//#define FORWARD 1
//#define STOP 0
//#define BACKWARD -1
enum class DIR { FORWARD = 1, STOP = 0, BACKWARD = -1 };


//#define MAX(a,b) a>b ? a:b
constexpr int MAX(int a, int b) { return a>b ? a:b; }

void pula() {
  
}