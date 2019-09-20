#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

#include<iostream>

using namespace std;

int main() {
    //输入图片
    Mat image = imread("../lena.jpg", CV_LOAD_IMAGE_COLOR);
    if (!image.data) {
        cout << "没有图片" << endl;
        return -1;
    }
    //显示原图
    imshow("image", image);
    //直方图均衡化后的图片
    Mat eqHistImage;
    equalizeHist(image, eqHistImage);
    imshow("histequlization_opencv", eqHistImage);
    waitKey(0);
    return 0;
}