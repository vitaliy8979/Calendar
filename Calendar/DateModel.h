//
//  DateModel.h
//  Calendar
//
//  Created by Vitaliy on 18/12/15.
//  Copyright © 2015 Vitaliy.M All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DateModel : NSObject

@property(nonatomic,assign)NSInteger day;
@property(nonatomic,assign)NSInteger month;
@property(nonatomic,assign)NSInteger year;
@property(nonatomic,assign)NSInteger weekday;
@property(nonatomic,assign)NSString *lunarDay;

@end
