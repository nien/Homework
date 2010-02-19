//
//  MyCustomView.h
//  RedSquare
//
//  Created by Nien Lam on 2/18/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyCustomView : UIView <UIAccelerometerDelegate>
{
	CGPoint firstTouch;
	CGPoint lastTouch;
	

	CGFloat                    squareSize;
	CGFloat                    rotation;
	CGColorRef                 aColor;
	BOOL                       twoFingers;
	
	IBOutlet UILabel           *xField;
	IBOutlet UILabel           *yField;
	IBOutlet UILabel           *zField;
}

@property CGPoint firstTouch;
@property CGPoint lastTouch;

@end
