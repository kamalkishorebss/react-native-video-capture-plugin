#ifdef __cplusplus
#import "react-native-video-capture-plugin.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNVideoCapturePluginSpec.h"

@interface VideoCapturePlugin : NSObject <NativeVideoCapturePluginSpec>
#else
#import <React/RCTBridgeModule.h>

@interface VideoCapturePlugin : NSObject <RCTBridgeModule>
#endif

@end
