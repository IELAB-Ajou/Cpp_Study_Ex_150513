//
//  DrOh.cpp
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "DrOh.h"

void DrOh::Setup()
{
    sArrConversation_[(int)kDOCTypeHI] = "안녕";
    sArrConversation_[(int)kDOCTypeWAYD] = "뭐하냐?";
    sArrConversation_[(int)kDOCTypeHMSYT] = "시간 얼마나 썼냐?";
    sArrConversation_[(int)kDOCTypeDYHAM] = "밥은 먹었냐?";
    sArrConversation_[(int)kDOCTypeLEAM] = "밥 먹으러 가자";
}

void DrOh::Conversation(Student& cDrOh, kStudentConversationType eType)
{
    kDrOhConversationType eTempType;
    switch (eType) {
        case kSCTypeHI:
            eTempType = TalkTo(kDOCTypeWAYD);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kSCTypePLAYGAME:
            eTempType = TalkTo(kDOCTypeHMSYT);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kSCTypeONEDAY:
            eTempType = TalkTo(kDOCTypeDYHAM);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kSCTypeNO:
            eTempType = TalkTo(kDOCTypeLEAM);
            cDrOh.Conversation(*this, eTempType);
            break;
        case kSCTypeOK:
            break;
            
        default:
            break;
    }
}

kDrOhConversationType DrOh::TalkTo(kDrOhConversationType eType)
{
    cout<<"DrOh : "<<sArrConversation_[(int)eType]<<endl;
    return eType;
}