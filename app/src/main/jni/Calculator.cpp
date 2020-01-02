//
// Created by ys992 on 2019-11-15.
//
// taeha.jni.sample
// rebuild.com.sample_jni;
#include <Calculator.h>

JNIEXPORT jint JNICALL Java_taeha_jni_sample_MainActivity_getSum(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    return num1 + num2;
}