//
//  Model.h
//
//  Created by Peter McIntyre on 2012/06/22.
//  Copyright (c) 2012 Seneca College. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "CustomEntityClass.h"

@interface Model : NSObject

@property (nonatomic, copy) NSString *authToken;

// Data from the network

@property (nonatomic, strong) NSArray *dataFromNetwork;

// Fetched results controllers

@property (nonatomic, strong) NSFetchedResultsController *frc_entity;

// New object factories

- (id)addNew:(NSString *)entityName;

// Data lifecycle

- (void)saveChanges;

@end
