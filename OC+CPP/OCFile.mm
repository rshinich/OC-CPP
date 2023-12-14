//
//  OCFile.m
//  OC+CPP
//
//  Created by 张忠瑞 on 2023/12/14.
//

#import "OCFile.h"

void MyObjectDoSomethingWith(void *obj, void *param) {
    [(__bridge id)obj dosomthing:param];
}

@implementation OCFile

- (instancetype)init {

    self = [super init];

    if (self) {
        _call = MyObjectDoSomethingWith;
    }

    return self;
}

- (int)dosomthing:(void *)param {

    printf("hey, there is OC ...\n");
    return 0;
}



@end
