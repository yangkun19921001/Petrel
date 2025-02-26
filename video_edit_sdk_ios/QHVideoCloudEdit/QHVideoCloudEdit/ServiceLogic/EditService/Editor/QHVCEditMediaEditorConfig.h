//
//  QHVCEditMediaEditorConfig.h
//  QHVideoCloudToolSet
//
//  Created by liyue-g on 2018/8/10.
//  Copyright © 2018年 yangkui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QHVCEditOverlayItemView.h"
#import "QHVCEditStickerItemView.h"
#import "QHVCEditSubtitleItemView.h"
#import <QHVCEditKit/QHVCEditKit.h>

#define kImageFileDurationMS 3000.0
#define kOutputVideoWidth 720
#define kOutputVideoHeight 1280
#define kTransferMaxDuration 2000.0
#define kDefaultFillModeIndex 0
#define kDefaultBgColorIndex 1

@interface QHVCEditMediaEditorConfig : NSObject

//输出配置
@property (nonatomic, assign) CGSize outputSize;
@property (nonatomic, assign) NSInteger outputFps;
@property (nonatomic, assign) NSInteger outputVideoBitrate;

//播放器
@property (nonatomic, strong) NSString *playerBgColor;

//滤镜
@property (nonatomic, assign) NSInteger filterIndex;
@property (nonatomic, retain) QHVCEditFilterEffect* effectFilter;

//背景音乐
@property (nonatomic, retain) QHVCEditTrackClipItem* musicClipItem;
@property (nonatomic, assign) BOOL musicHasFIFO;
@property (nonatomic, assign) float musicVolume;

//音效
@property (nonatomic, assign) NSInteger volume;
@property (nonatomic, assign) NSInteger pitch;
@property (nonatomic, assign) BOOL hasAudioTransfer;

//倍速
@property (nonatomic, assign) CGFloat speed;

//裁剪
@property (nonatomic, assign) BOOL mainTrackClipsFlipY;
@property (nonatomic, assign) BOOL mainTrackClipsFlipX;
@property (nonatomic, assign) CGFloat mainTrackClipsRadian;
@property (nonatomic, assign) NSInteger mainTrackFillModeIndex;
@property (nonatomic, assign) NSInteger mainTrackBgColorIndex;

//画中画
@property (nonatomic, retain) NSMutableArray<QHVCEditOverlayItemView *>* overlayItemArray;

//贴纸
@property (nonatomic, retain) NSMutableArray<QHVCEditStickerItemView *>* stickerItemArray;

//字幕
@property (nonatomic, retain) NSMutableArray<QHVCEditSubtitleItemView *>* subtitleItemArray;

//水印
@property (nonatomic, retain) QHVCEditStickerEffect* effectWaterMark;

+ (instancetype)sharedInstance;

@end
