//
//  AGZDataViewController.h
//  iPad_appgz
//
//  Created by appgz on 12-4-17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AGZDataViewController : UIViewController{


UILabel * titleLabel,*titleLabel2;
UIImageView * newsImg,*newsImg2;
UITextView * newsInfo,*newsInfo2;
    
    NSArray * arr,* arr2,* arrImg;
}
@property(nonatomic,retain) UILabel * titleLabel, *titleLabel2;
@property(nonatomic,retain) UIImageView * newsImg,* newsImg2;

@property(nonatomic,retain) UITextView * newsInfo,* newsInfo2;
@property (strong, nonatomic) id dataObject;
@property (strong, nonatomic)  UILabel *dataLabel;
@end
