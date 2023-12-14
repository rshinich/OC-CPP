//
//  CppFile.cpp
//  OC+CPP
//
//  Created by 张忠瑞 on 2023/12/14.
//

#include "CppFile.hpp"
#include <stdio.h>

CppFile::CppFile(void *ocObj, OCInterfaceCFunction interfaceFunction) {

    mocObj = ocObj;
    mInterfaceFunction = interfaceFunction;
}

CppFile::~CppFile() {

}

void CppFile::doSomthings() {

    printf("there is c++\n");

    mInterfaceFunction(mocObj, NULL);
}
