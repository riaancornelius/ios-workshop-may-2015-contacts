//
//  Contact.h
//  
//
//  Created by Riaan on 2015/06/03.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contact : NSManagedObject

@property (nonatomic, retain) NSString * firstname;
@property (nonatomic, retain) NSString * lastname;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * email;

@end
