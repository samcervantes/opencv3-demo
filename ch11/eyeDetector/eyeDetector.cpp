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

	cv::Mat dst2;
	cv::Mat element;
	cv::Point anchor = cv::Point(-1, -1);
	int iterations = 1;
	int borderType2 = cv::BORDER_CONSTANT;
	const cv::Scalar& borderValue2 = cv::morphologyDefaultBorderValue();

	cv::dilate(
		dst,
		dst2,
		element,
		anchor,
		iterations,
		borderType2,
		borderValue2
	);

	cv::Mat dst3;
	cv::Mat element2;
	cv::Point anchor2 = cv::Point(-1, -1);
	int iterations2 = 5;
	int borderType3 = cv::BORDER_CONSTANT;
	const cv::Scalar& borderValue3 = cv::morphologyDefaultBorderValue();

	cv::erode(
		dst2,
		dst3,
		element2,
		anchor2,
		iterations2,
		borderType3,
		borderValue3
	);

	cv::Mat dst4;
	cv::Mat element4;
	cv::Point anchor4 = cv::Point(-1, -1);
	int iterations4 = 6;
	int borderType4 = cv::BORDER_CONSTANT;
	const cv::Scalar& borderValue4 = cv::morphologyDefaultBorderValue();

	cv::dilate(
		dst3,
		dst4,
		element4,
		anchor4,
		iterations4,
		borderType4,
		borderValue4
	);


	cv::imshow("Original", src);
	cv::imshow("Laplacian", dst);
	cv::imshow("Dilated", dst2);
	cv::imshow("Eroded", dst3);
	cv::imshow("Dilated2", dst4);

	cv::waitKey();

	return 0;

}
