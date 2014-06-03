//
//  RTADetailViewController.h
//  RT_Assist
//
//  Created by Beltran, Robert on 6/2/14.
//  Copyright (c) 2014 Robert Beltran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RTADetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
