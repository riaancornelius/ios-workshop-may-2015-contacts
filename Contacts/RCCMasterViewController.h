//
//  RCCMasterViewController.h
//  Contacts
//
//  Created by Riaan on 2015/06/03.
//  Copyright (c) 2015 Riaan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCCMasterViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic,strong) NSArray *contacts;

@end
