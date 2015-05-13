//
//  Student.h
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_Ex150513__Student__
#define __Cpp_Study_Ex150513__Student__

#include <stdio.h>
#include <iostream>
#include "TypeCollection.h"
#include "DrOh.h"

using namespace std;

class DrOh;

class Student
{
private:
    const char* sArrConversation_[(int)kSCTypeNum];
    
public:
    void Setup();   // conversation 을 setup 하는 함수
    void Conversation(DrOh& cDrOh, kDrOhConversationType eType);
    kStudentConversationType TalkTo();
    kStudentConversationType TalkTo(kStudentConversationType eType);
};

#endif /* defined(__Cpp_Study_Ex150513__Student__) */
