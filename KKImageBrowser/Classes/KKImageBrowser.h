//
//  KKImageBrowser.h
//  KKImageBrowser_Example
//
//  Created by Hansen on 11/18/21.
//  Copyright © 2021 chenghengsheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KKImageBrowserModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKImageBrowser : UIViewController

@property (nonatomic, strong) NSArray <KKImageBrowserModel *> *images;
@property (nonatomic, assign) NSInteger index;

+ (UIWindow *)mainWindow;

@end

NS_ASSUME_NONNULL_END
