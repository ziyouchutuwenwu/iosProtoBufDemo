//
//  ViewController.m
//  iosProtoBufDemo
//
//  Created by mmc on 2017/3/4.
//  Copyright © 2017年 mmc. All rights reserved.
//

#import "ViewController.h"
#import "ProtoBufCodec.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSData* data = [ProtoBufCodec encode];
    NSLog(@"%@\n", data);
    
    Family* family = [ProtoBufCodec decode:data];
    NSLog(@"name %@, age %d\n", [family personAtIndex:0].name, [family personAtIndex:0].age);
}

@end
