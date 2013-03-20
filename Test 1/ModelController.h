//
//  ModelController.h
//  Test 1
//
//  Created by Michael Spanheimer on 21.03.13.
//  Copyright (c) 2013 Michael Spanheimer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
