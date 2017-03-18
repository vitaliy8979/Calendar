//
//  DateView.h
//  Calendar
//
//  Created by Vitaliy on 18/12/15.
//  Copyright © 2015 Vitaliy.M All rights reserved.
//

#import <UIKit/UIKit.h>
@class DateModel;
@interface DateView : UIView
@property(nonatomic,strong)UILabel *solarCalendarLabel;
@property(nonatomic,strong)UILabel *lunarCalendarLabel;
@property(nonatomic,strong)DateModel *dateModel;
@property(nonatomic,strong)UIView *highlightView;

-(void)fillDate:(DateModel *)dateModel;
@end
