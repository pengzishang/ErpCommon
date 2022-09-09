//
//  ErpCommonDefinition.h
//  ErpCommon
//
//  Created by fakepinge on 2017/12/27.
//  Copyright © 2017年 fakepinge. All rights reserved.
//

#ifndef ErpCommonDefinition_h
#define ErpCommonDefinition_h

#import <HFTCommonDefinition/HFTCommonDefinition.h>
#import <ErpNetworkConfig/APPNetworkConfig.h>

#pragma mark -------------------------- 默认全局图片 --------------------------------
#define kErpSourcesStr                      @"ErpCommonModule.bundle"
#define kErpCommonImageNameStr(nameStr)     ([NSString stringWithFormat:@"%@/%@", kErpSourcesStr, nameStr])
// 默认头像Image
#define kErpDefautImage                     [UIImage imageNamed:kErpCommonImageNameStr(@"global_defaut_head")]
// 默认头像ImageStr
#define kErpDefautImageStr                  kErpCommonImageNameStr(@"global_defaut_head")
// 左返回Image 黑色
#define kErpBackImage                       [UIImage imageNamed:kErpCommonImageNameStr(@"global_leftBackBlack")]
// 左返回ImageStr 黑色
#define kErpBackImageStr                    kErpCommonImageNameStr(@"global_leftBackBlack")
// 左返回Image 白色
#define kErpBackWhiteImage                  [UIImage imageNamed:kErpCommonImageNameStr(@"global_leftBackWhite")]
// 左返回ImageStr 白色
#define kErpBackWhiteImageStr               kErpCommonImageNameStr(@"global_leftBackWhite")
// 关闭Image 黑色
#define kErpCloseImage                       [UIImage imageNamed:kErpCommonImageNameStr(@"global_closeBlack")]
// 关闭ImageStr 黑色
#define kErpCloseImageStr                    kErpCommonImageNameStr(@"global_closeBlack")
// 加载图片的占位图Image(1：1)
#define kErpLoadImage                       [UIImage imageNamed:kErpCommonImageNameStr(@"global_image_placeholder")]
// 加载图片的占位图ImageStr(1：1)
#define kErpLoadImageStr                    kErpCommonImageNameStr(@"global_image_placeholder")
// 加载图片的占位图ImageStr2(4：3)
#define kErpLoadImageStr2                   kErpCommonImageNameStr(@"global_image_placeholder_load")
// 加载图片的占位图Image2(4：3)
#define kErpLoadImage2                      [UIImage imageNamed:kErpLoadImageStr2]
// 加载图片的占位图Image(矩形)
#define kErpLoadRectangleImage              [UIImage imageNamed:kErpCommonImageNameStr(@"global_image_placeholderRectangle")]
// 加载图片的占位图ImageStr(矩形)
#define kErpLoadRectangleImageStr           kErpCommonImageNameStr(@"global_image_placeholderRectangle")
// 添加图片Image
#define kErpAddPhoto                        [UIImage imageNamed:kErpCommonImageNameStr(@"global_addImage")]
// 添加图片ImageStr
#define kErpAddPhotoStr                     kErpCommonImageNameStr(@"global_addImage")
// 添加视频Image
#define kErpAddVideo                        [UIImage imageNamed:kErpCommonImageNameStr(@"global_addVideo")]
// 添加视频ImageStr
#define kErpAddVideoStr                     kErpCommonImageNameStr(@"global_addVideo")
// 添加VRImage
#define kErpAddVR                           [UIImage imageNamed:kErpCommonImageNameStr(@"global_addVR")]
// 添加VRImageStr
#define kErpAddVRStr                        kErpCommonImageNameStr(@"global_addVR")
// 用户考试职级图片
#define kUserAuthLevelImage(level) [UIImage imageNamed:kErpCommonImageNameStr((((int)level)?([NSString stringWithFormat:@"exam_level%d", (int)(level)]):@""))]
// 警示图标
#define kErpIconWarnning                    [UIImage imageNamed:kErpCommonImageNameStr(@"ICON_警示")]

#pragma mark ------------------------ 掌通全局颜色 -------------------------------
// 掌通主题色
#define kColorTheme                     kColorSceneBlue
// icon和控件关键色、主题色
#define  kColorSceneBlue                HEX_RGB(0x3396fb)
// 用于与主题色搭配使用
#define  kColorSceneGreen               HEX_RGB(0x19bc85)
// 用于特别突出的文字和icon
#define  kColorSceneOrange              HEX_RGB(0xfe943e)
// 用于提示状态和删除等警示色
#define  kColorSceneRed                 HEX_RGB(0xf25542)
// 背景灰色
#define  kColorBgGray                   HEX_RGB(0xf7f7f7)
// 警示背景颜色
#define  kColorBgWarnning               RGB(255,247,234)
// 分割线颜色
#define  kColorLineGray                 HEX_RGB(0xe7e7e7)

#pragma mark ------------------------ 掌通文字颜色 -------------------------------
// 价格等需要突出的字体颜色
#define  kColorFontLight                kColorSceneOrange
// ICON、特色字体颜色
#define  kColorFontMain                 HEX_RGB(0x12b3f51)
// 用于标题性文字颜色
#define  kColorFontTitle                HEX_RGB(0x333333)
// 用于标签性文字颜色
#define  kColorFontNormal               HEX_RGB(0x666666)
// 用于辅助性文字颜色
#define  kColorFontAssist               HEX_RGB(0x999999)
// 用于提示性文字 例如占位字颜色
#define  kColorFontPlaceHolder          HEX_RGB(0xcccccc)
// 警示文字颜色
#define  kColorFontWarnning             RGB(255,179,70)

#pragma mark ------------------------ 掌通文字大小 -------------------------------
// 用于少数标题 如导航栏标题
#define kErpFontBigTitle                kMarkFontSize6(32)
#define kErpFontPointBigTitle           kMarkFontPointSize6(32)
// 模块标题 如房源详情页版块标题
#define kErpFontTitle                   kMarkFontSize6(30)
#define kErpFontPointTitle              kMarkFontPointSize6(30)
// 用于正文内容，昵称 如消息页面聊天标题
#define kErpFontContent                 kMarkFontSize6(28)
#define kErpFontPointContent            kMarkFontPointSize6(28)
// 用于辅助性文字 如房源楼盘信息
#define kErpFontSubTitle                kMarkFontSize6(24)
#define kErpFontPointSubTitle           kMarkFontPointSize6(24)
// 用于辅助性文字  如房源列表均价
#define kErpFontMinTitle                kMarkFontSize6(20)
#define kErpFontPointMinTitle           kMarkFontPointSize6(20)
// 警示文字大小
#define  kErpFontWarnning               kFontSize6(12)

#pragma mark ------------------------ 导航栏宽度 -------------------------------
// 两段，每段两个字
#define kSegmentNaviWidth_2_2  kLMSScreenFit(185, 180, 175)
// 两段，每段四个字
#define kSegmentNaviWidth_2_4  kLMSScreenFit(190, 185, 180)
// 三段，每段三个字
#define kSegmentNaviWidth_3_3  kLMSScreenFit(210, 200, 200)
// 三段，每段4个字
#define kSegmentNaviWidth_3_4  kLMSScreenFit(260, 255, 250)

#pragma mark ------------------------ 掌通下载链接 -------------------------------
#define kErpAppDownloadUrlStr           @"https://itunes.apple.com/cn/app/zhang-shang-hao-fang-tong/id893555814?mt=8"

#pragma mark ----------------------- 掌通图片相关限制 -----------------------------
/* ----------------------------- 全景图上传张数限制 -----------------------------*/
#define kMaxFullPhotosCount             15
/* ----------------------------- 室内图上传张数限制 -----------------------------*/
#define kMaxIndoorPhotosCount(isVilla)           (isVilla? 20 : 12)
/* ----------------------------- 户型图上传张数限制 -----------------------------*/
#define kMaxHouseTypePhotosCount        3

/* ----------------------------- 外景图上传张数限制 -----------------------------*/
#define kMaxExteriorPhotosCount         10

#pragma mark ----------------------- 刷新状态枚举 -----------------------------

typedef NS_ENUM(NSInteger, RefreshDataStatus) {
    Refresh_HasDataAndHasMoreData = 1, // 当前有数据 && 还有更多数据 --> 设置
    Refresh_NoDataOrHasNoMoreData = 2, //  当前无数据 || 当前有数据但是没有更多数据 --> 设置
    Refresh_NoNet                 = 3  // 网络失败 -->设置
};

#pragma mark ------------------------------ 百度地图 ----------------------------
extern NSString * const kBaiduMapAPPID;
extern NSString * const kBaiduTrackServiceID;
extern NSString * const kBaiduTrackMcodeID;

#pragma mark ------------------------------ 分享相关 ----------------------------
// ShareSDK
extern NSString * const kShareSDKAppKey;
// 友盟SDK
extern NSString * const kUMSDKAppKey;
// QQ（好房通）
extern NSString * const kQQAPPID;
extern NSString * const kQQAPPKey;
extern NSString * const kQQUniversalLink; // 通用链接
// 微信（好房通）
extern NSString * const kWeChatAPPID;
extern NSString * const kWeChatAPPSecret;
extern NSString * const kWeChatUniversalLink; // 通用链接

// 微博(好房通)
extern NSString * const kSinaAppKey;
extern NSString * const kSinaAPPSecret;
// zfb
extern NSString * const kZFBAPPID;

#pragma mark ------------------------------ 云信key ----------------------------
extern NSString * const kYunXinIMAPPKey;
extern NSString * const kYunXinAPNSAPPKey;
extern NSString * const kYunXinVOIPAPPKey;

#pragma mark ------------------------------ h5_zf -----------------------------
extern NSString * const kH5YapIdentifierId;
#pragma mark ------------------------------ webSource -------------------------
extern NSString * const kWebSourceKey;
#pragma mark ------------------------------ projectType -----------------------
extern NSString * const kAppProjectType;
#pragma mark ------------------------------ appSource -----------------------
extern NSString * const kAppSource;
#pragma mark ------------------------------ aesKey -----------------------
extern NSString * const kAesKey;

#endif /* ErpCommonDefinition_h */
