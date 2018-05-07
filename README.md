@property(nonnull,strong)CustomTakePhotoViewController *customTakePhotoViewController; //创建
 self.customTakePhotoViewController =[[CustomTakePhotoViewController alloc]initWithNibName:@"CustomTakePhotoViewController" bundle:nil];//初始化
 self.customTakePhotoViewController.takePhotoFinishedBlock = ^(UIImage *choiceImage) {
      //此处拿到照片后想干嘛干嘛吧
    };
