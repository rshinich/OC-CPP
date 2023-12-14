//
//  OCFile.h
//  OC+CPP
//
//  Created by 张忠瑞 on 2023/12/14.
//

#import <Foundation/Foundation.h>
#include "FuncDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface OCFile : NSObject

@property OCInterfaceCFunction call;

- (int)dosomthing:(void *)param;

@end

NS_ASSUME_NONNULL_END
