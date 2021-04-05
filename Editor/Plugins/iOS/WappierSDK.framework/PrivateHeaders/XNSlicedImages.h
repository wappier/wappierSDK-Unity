//
//  XNSlicedImages.h
//  sdk
//
//  Created by Andreas Farmakis on 07/06/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface XNSlicedImages : NSObject

typedef NS_ENUM(NSInteger, XNSliceOrientation) {
    XNVerticalSlices,
    XNHorizontalSlices,
    XNNinePatch
};


-(instancetype)initWithImages:(NSArray*)imageSlices
               andOrientation:(XNSliceOrientation)orientation;

//A CGRectNull or CGRectZero will return the original image, for a single slice image
-(void)drawInRect:(CGRect)rect;
-(UIImage*)imageInRect:(CGRect)rect;
-(void)drawWithInsetsInRect:(CGRect)rect;
@end

NS_ASSUME_NONNULL_END
