//
//  DetailViewController.h
//  Contacts
//
//  Created by Riaan on 2015/06/03.
//  Copyright (c) 2015 Riaan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
