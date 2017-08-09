//
//  UIView+Extend.h
//  PGJOA
//
//  Created by QzydeMac on 16/9/5.
//  Copyright © 2016年 Qzy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extend)

@property (nonatomic,assign) CGFloat width;
@property (nonatomic,assign) CGFloat height;
@property (nonatomic,assign,readonly) CGFloat maxY;
@property (nonatomic,assign,readonly) CGFloat minY;
@property (nonatomic,assign,readonly) CGFloat maxX;
@property (nonatomic,assign,readonly) CGFloat minX;
@property (nonatomic,assign) CGFloat centerY;
@property (nonatomic,assign) CGFloat centerX;
@property (nonatomic,assign) CGFloat x;
@property (nonatomic,assign) CGFloat y;
@property (nonatomic,assign) CGSize size;

@end
