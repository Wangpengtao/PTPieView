//
//  ViewController.m
//  PTPieView
//
//  Created by 天蓝 on 2017/8/9.
//  Copyright © 2017年 PT. All rights reserved.
//

#import "ViewController.h"
#import "YTLPieView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    YTLPieView *pieView = [[YTLPieView alloc] initWithFrame:CGRectMake(20, 100, [UIScreen mainScreen].bounds.size.width - 40, 220)
                                                  dataItems:@[@3,@2,@3,@2]
                                                 colorItems:@[
                                                              [UIColor colorWithRed:0.95f green:0.60f blue:0.19f alpha:1.00f],
                                                              [UIColor colorWithRed:0.01f green:0.57f blue:1.00f alpha:1.00f],
                                                              [UIColor colorWithRed:1.00f green:0.23f blue:0.19f alpha:1.00f],
                                                              [UIColor blackColor]]
                                                upTextItems:@[@"30%购物",@"20%水电",@"30%房租",@"20%其他"]
                                              downTextItems:@[@"30G",@"20G",@"30G",@"20G"]];
    [self.view addSubview:pieView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
