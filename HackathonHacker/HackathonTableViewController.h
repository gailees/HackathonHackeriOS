//
//  HackathonTableViewController.h
//  HackathonHacker
//
//  Created by David Fontenot on 9/20/14.
//  Copyright (c) 2014 Dave Fontenot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface HackathonTableViewController : UITableViewController



@property (nonatomic, strong) NSMutableArray *hackathonsArray;

@property (nonatomic, strong) NSMutableArray *hackathons;

@end
