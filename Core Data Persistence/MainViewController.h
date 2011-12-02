//
//  MainViewController.h
//  Core Data Persistence
//
//  Created by snake on 11-12-2.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>
{
    UITextView *line1;
    UITextView *line2;
    UITextView *line3;
    UITextView *line4;
}

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) IBOutlet UITextField *line1;
@property (retain, nonatomic) IBOutlet UITextField *line2;
@property (retain, nonatomic) IBOutlet UITextField *line3;
@property (retain, nonatomic) IBOutlet UITextField *line4;

@end
