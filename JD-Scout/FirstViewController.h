//
//  MasterViewController.h
//  JD-Scout
//
//  Created by Halston van der Sluys on 12/27/14.
//  Copyright (c) 2015 Halston van der Sluys. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailViewController;

@interface FirstViewController : UIViewController

//TAB ONE Buttons (Pit Scouting)
@property (weak, nonatomic) IBOutlet UIButton *submitButton;
@property (weak, nonatomic) IBOutlet UIButton *highButton;
@property (weak, nonatomic) IBOutlet UIButton *lowButton;
@property (weak, nonatomic) IBOutlet UIButton *scoringButton;
@property (weak, nonatomic) IBOutlet UIButton *defenceButton;
@property (weak, nonatomic) IBOutlet UIButton *assistButton;
@property (weak, nonatomic) IBOutlet UIButton *slowButton;
@property (weak, nonatomic) IBOutlet UIButton *mediumButton;
@property (weak, nonatomic) IBOutlet UIButton *fastButton;
@property (weak, nonatomic) IBOutlet UIButton *naButton;
@property (weak, nonatomic) IBOutlet UIButton *drivesButton;
@property (weak, nonatomic) IBOutlet UIButton *shootsHighButton;
@property (weak, nonatomic) IBOutlet UIButton *shootsLowButton;



//TAB 1 TableView (Pit Scouting)


@end
