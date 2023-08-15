//
//  KKImageBrowserModel.h
//  KKImageBrowser_Example
//
//  Created by Hansen on 11/17/21.
//  Copyright © 2021 chenghengsheng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKImageBrowserModel : NSObject

@property (nonatomic, assign) CGRect fromFrame;

@property (nonatomic, strong) NSURL *url;//网络的图片资源或者本地的图片资源
@property (nonatomic, strong) UIImage *image;//image优先级高于url

- (instancetype)initWithURL:(NSURL *)url fromView:(UIView *)fromView;

- (void)setFrameView:(UIView *)fromView;

@end

NS_ASSUME_NONNULL_END
