#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	if(argc != 2) {
		cout << "removePerson\nUsage: " << argv[0] << "<image>" << endl;
		return -1;
	}

	cv::Mat src = cv::imread(argv[1], -1);
	if(src.empty()) {
		cout << "Cannot load " << argv[1] << endl;
		return -1;
	}
	cv::imshow("src", src);

	cv::Mat dst;
	double sp = 20;
	double sr = 40;
	int maxLevel = 2;
	cv::TermCriteria termcrit = cvTermCriteria(cv::TermCriteria::MAX_ITER | cv::TermCriteria::EPS, 5, 1);

	cv::pyrMeanShiftFiltering(
		src,
		dst,
		sp,
		sr,
		maxLevel,
		termcrit
	);

	cv::imshow("dst", dst);

	cv::waitKey();

}