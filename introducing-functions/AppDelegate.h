//
//  AppDelegate.h
//  introducing-functions
//
//  Created by Cole Wilkes on 4/17/15.
//  Copyright (c) 2015 Cole Wilkes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void) printIntroductions:(NSString *)name;
- (void) countDownTillIntroduction: (NSInteger)numberOfDays;

@end

