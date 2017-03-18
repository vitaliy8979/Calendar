//
//  DateTools.h
//  Calendar
//
//  Created by Vitaliy on 18/12/15.
//  Copyright © 2015 Vitaliy.M All rights reserved.
//

#import <Foundation/Foundation.h>
@class CellDateModel;
@interface DateTools : NSObject

+(CellDateModel *)dateToCell:(NSInteger)deviation;
+(NSInteger)getDrawRow:(NSInteger)deviation;
+(NSDateComponents *)getCurrentDate;
+(NSDateComponents *)getCellMonthDate:(NSInteger)deviation;

@end
