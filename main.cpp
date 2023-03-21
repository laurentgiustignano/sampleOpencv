#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>


int main() {
    cv::samples::addSamplesDataSearchPath("../samples/data");
    std::string image_path = cv::samples::findFile("Sam.jpeg", false, true);

    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);
    if (img.empty()) {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    cv::imshow("Display window", img);
    auto k = cv::waitKey(0); // Wait for a keystroke in the window
    if (k == 's') {
        cv::imwrite("Sam.png", img);
    }

    return 0;
}