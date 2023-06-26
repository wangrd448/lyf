//
//  HNTHomeHeaderView.h
//  demo
//
//  Created by 东哥 on 2022/4/25.
//

#import <UIKit/UIKit.h>
#import "HNTAccountModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HNTHomeHeaderView : UITableViewHeaderFooterView

@property(nonatomic ,strong) HNTAccountModel    *infoModel;

@property(nonatomic ,assign) NSInteger           indexNumbet;

@end

NS_ASSUME_NONNULL_END
