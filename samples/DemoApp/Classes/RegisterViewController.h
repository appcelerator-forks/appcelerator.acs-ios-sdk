//
//  RegisterViewController.h
//  Appcelerator-ios-demo
//
//  Created by Michael Goff on 11/27/09.
//  Copyright 2011 Appcelerator Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProgressViewController.h"
#import "ACSClient.h"

@protocol RegisterDelegate;

@interface RegisterViewController : UITableViewController <CCRequestDelegate> {
	NSOperationQueue *queue;
	NSMutableArray *textFields;
	IBOutlet UITableView *tableView;
	ProgressViewController *registerProgress;
	
	// init params
	id <RegisterDelegate> delegate;
    CCRequest *pendingRequest;
}

@property (nonatomic, assign) id <RegisterDelegate> delegate;

@end

@protocol RegisterDelegate
-(void)registerSucceeded;
-(void)registerFailed;
@end
