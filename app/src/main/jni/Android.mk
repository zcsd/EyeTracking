LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#opencv
OPENCVROOT:= /Users/zichun/AndroidStudioProjects/OpenCV-3.1.0-android-sdk
OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
OPENCV_LIB_TYPE:=SHARED
include ${OPENCVROOT}/sdk/native/jni/OpenCV.mk

LOCAL_SRC_FILES := com_ntu_zc_eyetracking_NativeClass.cpp

LOCAL_LDLIBS += -llog
LOCAL_MODULE := MyOpencvLibs


include $(BUILD_SHARED_LIBRARY)