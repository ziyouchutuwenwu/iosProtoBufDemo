//
//  ProtoBufCodec.h
//  iosProtoBufDemo
//
//  Created by mmc on 2017/3/4.
//  Copyright © 2017年 mmc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProtoBuf/My.pb.h"

@interface ProtoBufCodec : NSObject

+ (NSData*) encode;
+ (Family*) decode:(NSData*)data;
    
@end
