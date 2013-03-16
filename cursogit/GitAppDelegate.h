//
//  GitAppDelegate.h
//  cursogit
//
//  Created by Alfonso Alba on 16/03/13.
//  Copyright (c) 2013 Alfonso Alba. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitViewController;

@interface GitAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) GitViewController *viewController;

@end
