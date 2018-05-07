//
//  CustomTakePhotoViewController.h
//  CustomTakePhoto
//
//  Created by 马雅杰 on 2018/5/2.
//  Copyright © 2018年 YaJieMa. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ChoiceActionFinished)(UIImage *choiceImage);

@interface CustomTakePhotoViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (nonatomic, copy) ChoiceActionFinished takePhotoFinishedBlock;//此参数为返回的图片数据



@end
