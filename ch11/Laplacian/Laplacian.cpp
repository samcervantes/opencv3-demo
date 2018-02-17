#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	if(argc != 2) {
		cout << "Laplacian\nUsage: " << argv[0] << " <image>" << endl;
		return -1;
	}

	cv::Mat src = cv::imread(argv[1], 1);
	if (src.empty()) {
		cout << "Cannot load: " << argv[1] << endl;
		return -1;
	}

	cv::Mat dst;
	int ddepth = CV_8U;
	int ksize = 1;
	double scale = 1;
	double delta = 0;
	int borderType = cv::BORDER_DEFAULT;

	cv::Laplacian(
		src,
		dst,
		ddepth,
		ksize,
		scale,
		delta,
		borderType
	);

	cv::imshow("Original", src);
	cv::imshow("Laplacian", dst);

	cv::waitKey();

	return 0;

}
