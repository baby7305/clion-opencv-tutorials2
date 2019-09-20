#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace cv;

int main(int argc, char *argv[]) {
    //输入图像
    Mat src = imread("../lena.jpg", IMREAD_GRAYSCALE);
    if (!src.data)
        return -1;
    //构建 CLAHE 对象
    Ptr<CLAHE> clahe = createCLAHE(2, Size(8, 8));
    Mat dst;
    //限制对比度的自适应直方图均衡化
    clahe->apply(src, dst);
    //显示原图及均衡化后的效果
    imshow("origin", src);
    imshow("enhance", dst);
    imwrite("clahe.jpg", dst);
    waitKey(0);
    return 0;
}