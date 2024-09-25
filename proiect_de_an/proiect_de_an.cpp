
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>


using namespace std;
using namespace cv;



void main() {
    VideoCapture video(1);
    Mat img;
    while (true) {
        video.read(img);
        imshow("Frame", img);
        waitKey(1);
    }
}


