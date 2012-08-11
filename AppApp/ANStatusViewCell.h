//
//  ANStatusViewCell.h
//  AppApp
//
//  Created by Zach Holmquist on 8/10/12.
//  Copyright (c) 2012 Sneakyness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ANStatusViewCell : UITableViewCell

@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) UIImage  *avatar;

@end
