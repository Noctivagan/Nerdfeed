//
//  BNRWebViewController.h
//  Nerdfeed
//
//  Created by Tom Anderson on 10/17/14.
//  Copyright (c) 2014 C-leveled. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BNRWebViewController : UIViewController
<UISplitViewControllerDelegate>
@property (nonatomic) NSURL *URL;

@end
