#ifndef TGCALLS_ANDROID_CONTEXT_H
#define TGCALLS_ANDROID_CONTEXT_H

#include "PlatformContext.h"

#include <jni.h>

namespace tgcalls {

class AndroidContext final : public PlatformContext {
public:
    AndroidContext(JNIEnv *env, jobject jController);
    ~AndroidContext() override;

    jobject getJavaCapturer();
    jclass getJavaCapturerClass();

private:
    jobject jController = nullptr;
    jclass VideoCameraCapturerClass = nullptr;
    jobject javaCapturer = nullptr;

};

} // namespace tgcalls

#endif
