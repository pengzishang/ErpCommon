
/*******************************************************************************
 # File        : ErpVendoredConfig.m
 # Project     : ErpCommon
 # Author      : fakepinge
 # Created     : 2017/12/27
 # Corporation : 成都好房通科技股份有限公司
 # Description :
 <#Description Logs#>
 -------------------------------------------------------------------------------
 # Date        : 2017/12/27
 # Author      : fakepinge
 # Notes       :
 <#Change Logs#>
 ******************************************************************************/

#import "ErpVendoredConfig.h"
#import <ErpNetworkConfig/APPNetworkConfig.h>
#import <HFTCommonDefinition/HFTCommonDefinition.h>

#pragma mark ------------------------------ 百度地图 -----------------------------
NSString * const kBaiduMapAPPID                = @"yCBU97g1THzaz7A50HZ8LL8oDwEw2YBc";
NSString * const kBaiduTrackServiceID          = @"218438";
NSString * kBaiduTrackMcodeID;

#pragma mark ------------------------------ 分享相关 -----------------------------
// ShareSDK
NSString * const kShareSDKAppKey         = @"2d80e9c3e41ee";
// 友盟SDK
NSString * const kUMSDKAppKey            = @"5dfc38a8cb23d21c570006a1";
// QQ（好房通）
NSString * const kQQAPPID                = @"101835075";
NSString * const kQQAPPKey               = @"2971661a253c08f32aedcb32b0292f41";
NSString * const kQQUniversalLink               = @"https://applinks.1200.com.cn/qq_conn/101835075";

// 微信（好房通）
NSString * const kWeChatAPPID            = @"wx134d51968d1a94de";
NSString * const kWeChatAPPSecret        = @"29d77337acf82751407c8f0fbf4d91fb";
NSString * const kWeChatUniversalLink          = @"https://applinks.1200.com.cn/panke/";

// 微博(好房通)
NSString * const kSinaAppKey             = @"3645698983";
NSString * const kSinaAPPSecret          = @"c10716d587482eb2dbc710ffdf842133";
// ZFB
NSString * const kZFBAPPID               = @"2017101209273469";

#pragma mark ------------------------------ 云信key -----------------------------
NSString * const kYunXinIMToken          = @"YUNXIN_IM_TOKEN";
NSString * kYunXinIMAPPKey;
NSString * kYunXinAPNSAPPKey;
NSString * kYunXinVOIPAPPKey;

#pragma mark ------------------------------ h5_zf ------------------------------
NSString *kH5YapIdentifierId = @"uuweb.haofang.net";
#pragma mark ------------------------------ webSource --------------------------
NSString *kWebSourceKey;
#pragma mark ----------------------------- projectType --------------------------
NSString *kAppProjectType = @"1";
#pragma mark ----------------------------- appSource --------------------------
NSString *kAppSource = @"4";
#pragma mark ------------------------------ aesKey -----------------------
NSString *kAesKey = @"meilian#@p!$&*()";

@implementation ErpVendoredConfig

+ (void)load {
    [self vendoredKeyConfig];
}

+ (void)vendoredKeyConfig {
    // 百度
    kBaiduTrackMcodeID = APP_BUNDLE_ID;
    // 云信
    if (SERVER_MODE_TYPE == 0){ // 线上模式
        // 云信
        kYunXinIMAPPKey         = @"d1d6b14d47183d3db31524048d45bd98";
        kYunXinAPNSAPPKey       = @"pankePro";
        kYunXinVOIPAPPKey       = @"ErpVoipCert";
    } else { // 测试
        // 云信
        kYunXinIMAPPKey         = @"8389f50292ce4b8141f5da84b3097597";
        kYunXinAPNSAPPKey       = @"pankeDev";
        kYunXinVOIPAPPKey       = @"ErpVoipCertDev";
    }
    kWebSourceKey = @"mlwy";
}

@end
