//
//  KKImageBrowserModel.m
//  KKImageBrowser_Example
//
//  Created by Hansen on 11/17/21.
//  Copyright © 2021 chenghengsheng. All rights reserved.
//

#import "KKImageBrowserModel.h"
#import "KKImageBrowser.h"

@implementation KKImageBrowserModel

- (instancetype)initWithURL:(NSURL *)url fromView:(UIView *)fromView {
    if (self = [self init]) {
        self.url = url;
        [self setFrameView: fromView];
    }
    return self;
}

- (void)setFrameView:(UIView *)fromView {
    self.fromFrame = [fromView convertRect:fromView.bounds toView:[KKImageBrowser mainWindow]];
}

@end
