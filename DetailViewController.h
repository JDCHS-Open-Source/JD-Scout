//
//  DetailViewController.h
//  Sdcouting test 12
//
//  Created by Halston van der sluys on 3/31/14.
//  Copyright (c) 2014 Halston van der sluys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
