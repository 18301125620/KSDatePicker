//
//  KSDatePicker.h
//  Bespeak
//
//  Created by kong on 16/3/4.
//  Copyright © 2016年 孔. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSDatePickerAppearance.h"

@interface KSDatePicker : UIView

@property (nonatomic, strong, readonly)KSDatePickerAppearance* appearance;

- (void)reloadAppearance;

- (void)show;
- (void)hidden;

@end

