//
//  YTLPieView.h
//  YouTiaoLi
//
//  Created by 天蓝 on 2017/8/9.
//  Copyright © 2017年 PT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YTLPieView : UIView


/**
 数据统计饼图

 @param frame frame
 @param dataItems 每个部分的数据源
 @param colorItems 每个部分的颜色
 @param upTextItems 线上文字
 @param downTextItems 线下文字
 */
- (instancetype)initWithFrame:(CGRect)frame
                    dataItems:(NSArray *)dataItems
                   colorItems:(NSArray *)colorItems
                  upTextItems:(NSArray *)upTextItems
                downTextItems:(NSArray *)downTextItems;
@end
