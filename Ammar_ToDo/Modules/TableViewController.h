//
//  TableViewController.h
//  Ammar_ToDo
//
//  Created by ammar on 30/04/2023.
//

#import <UIKit/UIKit.h>
#include "MyTask.h"
#include "HomeDelegate.h"

@interface TableViewController : UITableViewController<UISearchResultsUpdating,HomeDelegate>
@property (nonatomic, strong) UISegmentedControl *segmentedControl;
@property (nonatomic, strong) UIBarButtonItem *addButton;
@property NSMutableArray<MyTask *> *arr;
@property NSMutableArray<MyTask *> *dataSource;
@property bool isPriority;
@property UISearchController *searchController;
- (void)setCellData:(MyTask *)item cell:(UITableViewCell *)cell;
@end

