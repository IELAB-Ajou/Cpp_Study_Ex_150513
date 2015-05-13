//
//  main.cpp
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include <iostream>
#include "DrOh.h"
#include "Student.h"

int main(int argc, const char * argv[]) {
    DrOh cDroh;
    Student cStudent;
    
    cDroh.Setup();
    cStudent.Setup();
    
    cStudent.Conversation(cDroh, cDroh.TalkTo(kDOCTypeHI));
    
    return 0;
}
