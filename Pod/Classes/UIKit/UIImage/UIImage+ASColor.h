//
//  UIImage+ASColor.h
//  AppScaffold Cocoa Category
//
//  Created by OolongTea on 16/3/5.
//  Copyright (c) 2016-2017 AppScaffold
//

#import <UIKit/UIKit.h>

@interface UIImage (ASColor)

/**
 *
 */
+ (UIImage *)as_imageWithPlaceHolder:(UIImage *)holder backGroundColor:(UIColor *)color size:(CGSize)size;

/**
 *
 */
+ (UIImage *)as_imageWithColor:(UIColor *)color;

@end
