#include <com_ntu_zc_eyetracking_OpencvNativeClass.h>

JNIEXPORT jint JNICALL Java_com_ntu_zc_eyetracking_OpencvNativeClass_convertGray
  (JNIEnv *, jclass, jlong addrRgba, jlong addrGray) {
    Mat& mRgb = *(Mat*)addrRgba;
    Mat& mGray = *(Mat*)addrGray;

    int conv;

    jint retVal;
    conv = toGray(mRgb, mGray);

    retVal = jint(conv);
    return retVal;

}

    int toGray(Mat img, Mat& Gray){
        cvtColor(img, Gray, CV_RGBA2GRAY);
        if(img.rows==Gray.rows && img.cols==Gray.cols)
            return 1;
        return 0;

    }