//
//  MyTableRowController.h
//  FirstWatch
//
//  Created by Peng on 11/20/14.
//  Copyright (c) 2014 peng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WatchKit/WatchKit.h>

@interface MyTableRowController : NSObject

@property (weak, nonatomic) IBOutlet WKInterfaceImage *logo;

@property (weak, nonatomic) IBOutlet WKInterfaceLabel *type;

@end
