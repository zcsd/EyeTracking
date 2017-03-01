#include <com_ntu_zc_eyetracking_NativeClass.h>

JNIEXPORT jint JNICALL Java_com_ntu_zc_eyetracking_NativeClass_convertGray
  (JNIEnv *, jclass, jlong addrRgba , jlong addrGray){
    Mat& mRgb = *(Mat*)addrRgba;
    Mat& mGray = *(Mat*)addrGray;

    int conv;
    jint retVal;
    conv = toGray(mRgb, mGray);
    retVal = (jint)conv;

    return retVal;
}
  int toGray(Mat img, Mat& gray){
      cvtColor(img, gray, CV_RGBA2GRAY);
      Canny(gray, gray, 60, 140, 3);
      if(gray.rows==img.rows && gray.cols==img.cols)
          return 1;
      return 0;
  }


