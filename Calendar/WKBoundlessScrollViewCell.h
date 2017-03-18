//
//  WKBoundlessScrollViewCell.h
//  Calendar
//
//  Created by Vitaliy on 16/12/15.
//  Copyright © 2015 Vitaliy.M All rights reserved.
//

#import <UIKit/UIKit.h>


@class CellDateModel;


@interface WKBoundlessScrollViewCell : UIView


@property(nonatomic,copy)NSString *identifier;
@property(nonatomic,assign)NSInteger deviation;
@property(nonatomic,strong)UILabel *label;
-(instancetype)initWithIdentifier:(NSString *)identifier;
-(void)fillDate:(CellDateModel *)cellDateModel;


@end
