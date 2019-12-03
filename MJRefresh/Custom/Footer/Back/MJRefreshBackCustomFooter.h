//
//  MJRefreshBackCustomFooter.h
//  MJRefreshExample
//
//  Created by Fice on 2019/12/3.
//  Copyright © 2019 小码哥. All rights reserved.
//

#import <MJRefresh/MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJRefreshBackCustomFooter : MJRefreshBackStateFooter
@property (weak, nonatomic, readonly) UIImageView *arrowView;
@property (weak, nonatomic, readonly) UIActivityIndicatorView *loadingView;

/** 菊花的样式 */
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle MJRefreshDeprecated("first deprecated in 3.2.2 - Use `loadingView` property");
@end

NS_ASSUME_NONNULL_END
