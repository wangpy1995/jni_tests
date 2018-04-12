//
// Created by wpy on 2018/2/7.
//
#include <test_ArrayOp.h>

JNIEXPORT jobject JNICALL Java_test_ArrayOp_arrayCopy
        (JNIEnv *env, jclass ignored, jobject src, jint src_pos, jobject dst, jint dst_pos, jint len) {
    (*env)->GetDirectBufferAddress(env,ignored);
    jobject *s = &src;
    jobject *d = &dst;
    *d = *s;
    return *d;
}

JNIEXPORT void JNICALL Java_test_ArrayOp_stringCopy
        (JNIEnv *env, jclass cls, jstring str, jbyteArray arr) {

}