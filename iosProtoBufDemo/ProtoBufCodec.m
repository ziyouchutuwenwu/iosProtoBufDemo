//
//  ProtoBufCodec.m
//  iosProtoBufDemo
//
//  Created by mmc on 2017/3/4.
//  Copyright © 2017年 mmc. All rights reserved.
//

#import "ProtoBufCodec.h"

@implementation ProtoBufCodec

+ (NSData*) encode{
    
    PersonBuilder* builder = [Person builder];
    builder.name = @"rico";
    builder.age = 22;
    Person* person = [builder build];
    
    FamilyBuilder* familyBuilder = [Family builder];
    [familyBuilder addPerson:person];
    Family* family = [familyBuilder build];
    
    return [family data];
}
    
+ (Family*) decode:(NSData*)data{
    return [Family parseFromData:data];
}
    
@end
