//
//  GWNewUserCenterTopCell.h
//  GWMovie
//
//  Created by liangscofield on 16/4/20.
//  Copyright © 2016年 gewara. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kUserCenterTopCellHeight (83)

typedef enum{
    GWUserCenterTopCellMyFavorStyle = 0, // 喜欢
    GWUserCenterTopCellMyViedoStyle, // 我的视频
    GWUserCenterTopCellPostVideoStyle,// 发布视频
}GWUserCenterTopCellStyle;


@class GWNewUserCenterTopCell;
@protocol GWNewUserCenterTopCelllDelegate <NSObject>

- (void)userCenterTopCell:(GWNewUserCenterTopCell *)userCenterTopCell clickWithStyle:(GWUserCenterTopCellStyle)topCellStyle;

@end

@interface GWNewUserCenterTopCell : UITableViewCell

@property (nonatomic, weak) id<GWNewUserCenterTopCelllDelegate> delegate;

@end


// 顶部三个展示 视图
@interface GWNewUserCenterShowView : UIControl

/**
 *  @param iconName <#iconName description#>
 *  @param text     <#text description#>
 */
- (void)displayWithIconName:(NSString *)iconName text:(NSString *)text;

@end
