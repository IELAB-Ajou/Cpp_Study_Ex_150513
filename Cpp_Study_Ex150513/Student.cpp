//
//  Student.cpp
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Student.h"

void Student::Setup()
{
    sArrConversation_[(int)kSCTypeHI] = "안녕하세요";
    sArrConversation_[(int)kSCTypeNO] = "아뇨";
    sArrConversation_[(int)kSCTypeOK] = "네";
    sArrConversation_[(int)kSCTypeONEDAY] = "하루요";
    sArrConversation_[(int)kSCTypePLAYGAME] = "롤 하고 있어요";
}

void Student::Conversation(DrOh& cDrOh, kDrOhConversationType eType)
{
    kStudentConversationType eTempType;
    switch (eType) {
        case kDOCTypeHI:
            eTempType = TalkTo(kSCTypeHI);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kDOCTypeWAYD:
            eTempType = TalkTo(kSCTypePLAYGAME);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kDOCTypeHMSYT:
            eTempType = TalkTo(kSCTypeONEDAY);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kDOCTypeDYHAM:
            eTempType = TalkTo(kSCTypeNO);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kDOCTypeLEAM:
            eTempType = TalkTo(kSCTypeOK);
            cDrOh.Conversation(*this, eTempType);
            break;
            
        default:
            break;
    }
}

kStudentConversationType Student::TalkTo(kStudentConversationType eType)
{
    cout<<"학생 : "<<sArrConversation_[(int)eType]<<endl;
    return eType;
}
