//
//  NewsTitleScrollView.h
//  RDFuturesApp
//
//  Created by 吴桂钊 on 2017/4/18.
//  Copyright © 2017年 FuturesApp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseScrollView.h"
#import "NewsViewModel.h"
@interface NewsTitleScrollView :BaseScrollView
@property (nonatomic,strong) NewsViewModel * viewModel;
@property (nonatomic,strong) UIView *lineView;
@end
