//
//  Item+CoreDataProperties.h
//  Grocery Dude
//
//  Created by taitanxiami on 15/11/29.
//  Copyright © 2015年 Tim Roadley. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Item.h"

NS_ASSUME_NONNULL_BEGIN

@interface Item (CoreDataProperties)

/**
 *  商品名称
 */
@property (nullable, nonatomic, retain) NSString *name;
/**
 *  数量
 */
@property (nullable, nonatomic, retain) NSNumber *quantity;
/**
 *  商品图片
 */
@property (nullable, nonatomic, retain) NSData *photoData;
/**
 *  是否在出现在购物清单中
 */
@property (nullable, nonatomic, retain) NSNumber *listed;
/**
 *  用户是否拿到该商品
 */
@property (nullable, nonatomic, retain) NSNumber *collected;

@end

NS_ASSUME_NONNULL_END
