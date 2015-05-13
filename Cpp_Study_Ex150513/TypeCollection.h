//
//  TypeCollection.h
//  Cpp_Study_Ex150513
//
//  Created by ssas on 2015. 5. 13..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef Cpp_Study_Ex150513_TypeCollection_h
#define Cpp_Study_Ex150513_TypeCollection_h

typedef enum
{
    kDOCTypeWAYD = 0,   // what are you doing?
    kDOCTypeHMSYT,      // How many spend your time?
    kDOCTypeHI,         // hi
    kDOCTypeDYHAM,        // Did you have a meal?
    kDOCTypeLEAM,         // Let's eat a meal
    
    kDOCTypeNum,
}kDrOhConversationType;
// 사실 이런 경우는 명명법도 좋지 않고 저렇게 사용하지도 않는다.
// (모두가 납득할만한 줄임말도 아니고, 그대로 쓰자니 이름이 너무 길다.)
// (애초에 kDrOhConversationType 자체도 너무 길다.)
// 다만 코딩 연습을 위해 약간 억지스럽게 설정한 것 뿐이다.

typedef enum
{
    kSCTypeHI = 0,
    kSCTypePLAYGAME,
    kSCTypeONEDAY,
    kSCTypeNO,
    kSCTypeOK,
    
    kSCTypeNum,
}kStudentConversationType;

#endif
