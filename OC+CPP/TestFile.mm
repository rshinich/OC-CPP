//
//  TestFile.m
//  OC+CPP
//
//  Created by 张忠瑞 on 2023/12/14.
//

#import "TestFile.h"
#import "OCFile.h"
#import "CppFile.hpp"

@implementation TestFile

- (instancetype)init {

    if (self) {
        self = [super init];
    }

    return self;
}

- (void)test {

    printf("test go \n");

    OCFile*oc = [[OCFile alloc] init];
    void* pointer = (__bridge void*)oc;

    CppFile* cpp = new CppFile(pointer, oc.call);
    cpp->doSomthings();

}

@end
