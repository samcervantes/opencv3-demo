#include <opencv2/opencv.hpp>

// Need to supply an image as a command line argument

int main(int argc, char** argv) {
	cv::Mat src, dst;

	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Example2", cv::WINDOW_AUTOSIZE);

	src = cv::imread(argv[1]);
	cv::imshow("Example1", src);

	//int op = CV_MOP_OPEN;
	//int op = CV_MOP_CLOSE;
	int op = CV_MOP_GRADIENT;
	//int op = CV_MOP_TOPHAT;
	//int op = CV_MOP_BLACKHAT;

	cv::Mat element;
	cv::Point anchor = cv::Point(-1, -1);
	int iterations = 1;
	int borderType = cv::BORDER_DEFAULT;
	const cv::Scalar& borderValue = cv::morphologyDefaultBorderValue();

	cv::morphologyEx(
		src,			// input image
		dst,			// result image
		op,				// operator (e.g. cv::MOP_OPEN)
		element,		// structuring element, cv::Mat()
		anchor,			// location of anchor point
		iterations,		// number of times to apply
		borderType, 	// border extrapolation
		borderValue
	);

	cv::imshow("Example2", dst);

	cv::waitKey(0);

	return 0;

}