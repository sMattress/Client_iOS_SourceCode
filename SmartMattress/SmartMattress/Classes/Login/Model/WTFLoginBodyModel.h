//
//  WTFLoginBodyModel.h
//  SmartMattress
//
//  Created by William Cai on 2016/12/14.
//  Copyright © 2016年 lesmarthome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTFLoginBodyModel : NSObject

@property (assign, nonatomic) NSInteger flag;

@property (assign, nonatomic) NSInteger err_code;
@property (copy, nonatomic) NSString *cause;

@property (strong, nonatomic) NSArray *params;

@end
