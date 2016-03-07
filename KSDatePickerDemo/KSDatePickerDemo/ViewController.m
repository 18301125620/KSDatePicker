//
//  ViewController.m
//  KSDatePickerDemo
//
//  Created by kong on 16/3/7.
//  Copyright © 2016年 孔. All rights reserved.
//

#import "ViewController.h"

#import "KSDatePicker.h"

@interface ViewController ()

@end

@implementation ViewController

- (IBAction)buttonClick:(UIButton *)sender {
    
    //x,y 值无效，默认是居中的
    KSDatePicker* picker = [[KSDatePicker alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width - 40, 300)];
    
    //配置中心，详情见KSDatePikcerApperance
    
    picker.appearance.radius = 5;
    
    //设置回调
    picker.appearance.resultCallBack = ^void(KSDatePicker* datePicker,NSDate* currentDate,KSDatePickerButtonType buttonType){
        
        if (buttonType == KSDatePickerButtonCommit) {
            
            NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
            [formatter setDateFormat:@"yyyy-MM-dd"];
            
            [sender setTitle:[formatter stringFromDate:currentDate] forState:UIControlStateNormal];
        }
    };
    // 显示
    [picker show];

}

@end
