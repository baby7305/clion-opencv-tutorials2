#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

#include<iostream>

using namespace std;
Mat image;//输入图像
int thresh = 100;
const int MAX_THRESH = 255;

//回调函数，手动设置阈值
void callback_thresh(int, void *) {
    Mat threshImage;
    threshold(image, threshImage, thresh, MAX_THRESH, cv::THRESH_BINARY);
    imshow("thres", threshImage);
}

int main(int argc, char *argv[]) {
    image = imread("../lena.jpg", CV_LOAD_IMAGE_GRAYSCALE);
    if (!image.data) {
        cout << "没有输入图片" << endl;
        return -1;
    }
    //阈值处理后的边缘强度
    namedWindow("thres", cv::WINDOW_AUTOSIZE);
    createTrackbar("threshold", "thres", &thresh, MAX_THRESH, callback_thresh);
    callback_thresh(0, 0);
    waitKey(0);
    return 0;
}