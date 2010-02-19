//
//  RedSquareAppDelegate.m
//  RedSquare
//
//  Created by Nien Lam on 2/18/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "RedSquareAppDelegate.h"
#import "RedSquareViewController.h"

@implementation RedSquareAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
