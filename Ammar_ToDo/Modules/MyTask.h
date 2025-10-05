//
//  MyTask.h
//  Ammar_ToDo
//
//  Created by ammar on 30/04/2023.
//

// MyTask.h

#import <Foundation/Foundation.h>
#import "UIKit/UIImage.h"
typedef NS_ENUM(NSInteger, TaskPriority) {
    taskPriorityLow,
    taskPriorityMedium,
    taskPriorityHigh
};

typedef NS_ENUM(NSInteger, TaskStatus) {
    taskStatusToDo,
    taskStatusInProgress,
    taskStatusDone
};

@interface MyTask :  NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *taskDescription;
@property (nonatomic, assign) TaskPriority priority;
@property (nonatomic, assign) TaskStatus status;
@property (nonatomic, strong) NSDate *creationDate;

- (UIImage *) getStatusImage;
@end

