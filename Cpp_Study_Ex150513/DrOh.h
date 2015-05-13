//
//  DrOh.h
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_Ex150513__DrOh__
#define __Cpp_Study_Ex150513__DrOh__

#include <stdio.h>
#include "TypeCollection.h"
#include "Student.h"

class Student;

class DrOh
{
private:
    const char* sArrConversation_[(int)kDOCTypeNum];
    
public:
    void Setup();   // conversation 을 setup 하는 함수
    void Conversation(Student& cStd, kStudentConversationType eType);
    kDrOhConversationType TalkTo();
    kDrOhConversationType TalkTo(kDrOhConversationType eType);
};

#endif /* defined(__Cpp_Study_Ex150513__DrOh__) */
