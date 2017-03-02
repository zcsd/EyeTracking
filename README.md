# EyeTracking System
Eye Tracking System Using Epson BT-200 Glasses(API15, Android 4.0.4)

IDE: Android Studio 2.2.3 in macOS or Windows

Install JDK, Android-SDK, NDK under Android Studio, using OpenCV-3.2.0-android-sdk

ADB Configuratiion:

    If you are using Windows system, please follow the steps(Verified) from https://tech.moverio.epson.com/en/bt-200/pdf/bt200_adb1505a_en.pdf
    
    If you are using Mac, there is no need to set ADB, Mac will recognise the device.

After downloading and Loading Project in Android Studio, some directory need to be changed before builing the project.
    
    1. app/src/main/jni/Android.mk , change to your opencv path for OPENCVROOT (OpenCV SDK source folder)
    2. app/build.gradle , change to your NDK path for commandLine (ndk-build folder)

screenshot for sample canny detector(using both Java and C++) running in BT-200 Glass

![alt tag](https://github.com/zcsd/EyeTracking/blob/master/app%20running.png)
