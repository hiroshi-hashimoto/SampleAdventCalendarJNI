//
// Created by hiroshi hashimoto on 15/12/15.
//
//package jp.hi6484.android.sample.adventcalendarjni;

#include <string.h>
#include <jni.h>
#include "sample_advent.h"

void Java_jp_hi6484_android_sample_adventcalendarjni_MainActivity_adventInitValue (JNIEnv* env,
                                                                                   jobject thiz) {
    adventInitValue();
}

void Java_jp_hi6484_android_sample_adventcalendarjni_MainActivity_adventAddValue (JNIEnv* env,
                                                                                    jobject thiz,
                                                                                    uint32_t value) {
    adventAddValue(value);
}

uint32_t Java_jp_hi6484_android_sample_adventcalendarjni_MainActivity_adventGetValue (JNIEnv* env,
                                                                                     jobject thiz) {
    return adventGetValue();
}
