//
//  RedSquareAppDelegate.h
//  RedSquare
//
//  Created by Nien Lam on 2/18/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RedSquareViewController;

@interface RedSquareAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    RedSquareViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet RedSquareViewController *viewController;

@end

