//
//  KSDatePickerAppearance.h
//  Bespeak
//
//  Created by kong on 16/3/4.
//  Copyright © 2016年 孔. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class KSDatePicker;
typedef NS_ENUM(NSUInteger, KSDatePickerButtonType) {
    KSDatePickerButtonCancel = 9999,
    KSDatePickerButtonCommit,
};

typedef void (^KSDatePickerResult)(KSDatePicker* datePicker,NSDate* currentDate,KSDatePickerButtonType buttonType);


@interface KSDatePickerAppearance : NSObject

//datePicker
@property (nonatomic, strong) UIColor           * datePickerBackgroundColor;
@property (nonatomic, assign) CGFloat           radius;
@property (nonatomic, strong) UIColor           *maskBackgroundColor;
@property (nonatomic, strong) NSDate            *minimumDate;
@property (nonatomic, strong) NSDate            *maximumDate;
@property (nonatomic, strong, readwrite) NSDate *currentDate;

@property (nonatomic, assign) UIDatePickerMode  datePickerMode;

//headerView
@property (nonatomic, copy) NSString            *headerText;
@property (nonatomic, strong) UIFont            *headerTextFont;
@property (nonatomic, strong) UIColor           *headerTextColor;
@property (nonatomic, assign) NSTextAlignment   headerTextAlignment;
@property (nonatomic, strong) UIColor           *headerBackgroundColor;
@property (nonatomic, assign) CGFloat           headerHeight;

//cancelButton
@property (nonatomic, assign) CGFloat           buttonHeight;  //cancelBtn and commitBtn

@property (nonatomic, copy) NSString            *cancelBtnTitle;
@property (nonatomic, strong) UIFont            *cancelBtnFont;
@property (nonatomic, strong) UIColor           *cancelBtnTitleColor;
@property (nonatomic, strong) UIColor           *cancelBtnBackgroundColor;

//commitButton
@property (nonatomic, copy) NSString            *commitBtnTitle;
@property (nonatomic, strong) UIFont            *commitBtnFont;
@property (nonatomic, strong) UIColor           *commitBtnTitleColor;
@property (nonatomic, strong) UIColor           *commitBtnBackgroundColor;

//line
@property (nonatomic, strong) UIColor           *lineColor;
@property (nonatomic, assign) CGFloat           lineWidth;

@property (nonatomic, copy) KSDatePickerResult  resultCallBack;

@end
