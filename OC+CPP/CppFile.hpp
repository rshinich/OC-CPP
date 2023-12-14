//
//  CppFile.hpp
//  OC+CPP
//
//  Created by 张忠瑞 on 2023/12/14.
//

#ifndef CppFile_hpp
#define CppFile_hpp

#include <stdio.h>
#include "FuncDefines.h"

class CppFile {
public:
    CppFile(void *ocObj, OCInterfaceCFunction interfaceFunction);
    ~CppFile();

    void doSomthings();

private:

    void *mocObj;
    OCInterfaceCFunction mInterfaceFunction;

};

#endif /* CppFile_hpp */
