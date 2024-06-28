#include <jni.h>
#include "react-native-video-capture-plugin.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_videocaptureplugin_VideoCapturePluginModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return videocaptureplugin::multiply(a, b);
}
