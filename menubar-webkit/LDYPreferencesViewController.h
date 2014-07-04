//
//  LDYPreferencesViewController.h
//  menubar-webkit
//
//  Created by Xhacker Liu on 6/11/14.
//  Copyright (c) 2014 Xhacker. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <RHPreferences.h>

@interface LDYPreferencesViewController : NSViewController <RHPreferencesViewControllerProtocol>

- (instancetype)initWithIdentifier:(NSString *)identifier
                      toolbarImage:(NSImage *)image
                      toolbarLabel:(NSString *)label;

@end