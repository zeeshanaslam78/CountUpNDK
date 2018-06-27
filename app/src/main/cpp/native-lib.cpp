#include <jni.h>
#include "Counting.h"


Counting *Counting::s_instance = 0;

extern "C"

JNIEXPORT jint JNICALL Java_com_xeeshi_countupndk_MainActivity_AddAndGetCounter(
        JNIEnv *env,
        jobject /* this */) {


    Counting::instance()->addCounter();

    return Counting::instance()->getCounter();
}
