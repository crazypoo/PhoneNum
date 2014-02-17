//
//  address.h
//  PhoneNum
//
//  Created by crazypoo on 11/28/13.
//  Copyright (c) 2013 crazypoo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface address : NSObject
{
    NSInteger sectionNumber;
    NSInteger recordID;
    NSString *name;
    NSString *email;
    NSString *tel;
}
@property NSInteger sectionNumber;
@property NSInteger recordID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *tel;
@end
