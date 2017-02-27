package com.ntu.zc.eyetracking;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

import org.opencv.android.OpenCVLoader;

public class MainActivity extends AppCompatActivity {

    private static String TAG="MainActivity";

    static {
        if(OpenCVLoader.initDebug()){
            Log.d(TAG, "OpenCV Loaded Successfully.");
        }
        else{
            Log.d(TAG, "OpenCV Not Loaded.");
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
