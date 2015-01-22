//
//  DetailViewController.h
//  JD-Scout
//
//  Created by Halston van der Sluys on 12/27/14.
//  Copyright (c) 2015 Halston van der Sluys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
