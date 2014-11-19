//
//  DetailViewController.h
//  FirstWatch
//
//  Created by Peng on 11/19/14.
//  Copyright (c) 2014 peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

