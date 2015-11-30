//
//  CoreDataHelper.h
//  Grocery Dude
//
//  Created by Tim Roadley on 18/09/13.
//  Copyright (c) 2013 Tim Roadley. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataHelper :NSObject

/**
 *  托管对象上下文
 */
@property (nonatomic, readonly) NSManagedObjectContext       *context;
/**
 *  托管对象模型
 */
@property (nonatomic, readonly) NSManagedObjectModel         *model;
/**
 *  持久化存储协调器
 */
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
/**
 *  持久化存储区
 */
@property (nonatomic, readonly) NSPersistentStore            *store;


- (void)setupCoreData;
- (void)saveContext;
@end
