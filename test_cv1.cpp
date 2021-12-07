
#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";
    cv::Mat mat1 = cv::imread(argv[1]);

    cv::namedWindow("image", cv::WINDOW_NORMAL);
    cv::imshow("image", mat1);
    cv::waitKey(0);

    return 0;
}

