//
//  Question.h
//  IPAL
//
//  Created by Tarun Verghis on 3/10/14.
//  Copyright (c) 2014 DePauw Open Source. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFHpple.h"

@interface Choice: NSObject

@property NSString *value;
@property NSString *text;

- (id) initWithValue:(NSString *)value withText:(NSString *)text;

@end

@interface Question : NSObject
extern NSString *const MULTIPLE_CHOICE;
extern NSString *const ESSAY;
extern NSString *const NO_CURRENT;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *text;

//properties representing hidden field in question form
@property int answerId; // -1 for essay, otherwise the value of the choices
@property int questionId;
@property int activeQuestionId;
@property int courseId;
@property int userId;
@property int ipalId;
@property int passcode;
@property (nonatomic, strong) NSString *instructor;

- (NSDictionary *) getParametersForSubmission;

@end
