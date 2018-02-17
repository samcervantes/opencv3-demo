#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	if(argc != 3) {
		cout << "LogPolar\nUsage: " << argv[0] <<" <imagename> <M value>\n" << "<M value>~30 is usually good enough\n";
		return -1;		
	}

	cv::Mat src = cv::imread(argv[1], 1);

	if(src.empty()) {
		cout << "Can not load " << argv[1] << endl;
		return -1;
	}

	cout << "Image size: " << src.cols << "px x " << src.rows << "px" << endl;

	double M = atof(argv[2]);
	cout << "Applying Scale Factor: " << M << endl;

	cv::Mat dst(src.size(), src.type()), src2(src.size(), src.type());
	cout << "Image Center: " << src.cols*0.5f << " x " << src.rows*0.5f << endl;

	cv::logPolar(
		src,
		dst,
		cv::Point2f(src.cols*0.5f, src.rows*0.5f),
		M,
		CV_INTER_LINEAR | CV_WARP_FILL_OUTLIERS
	);

	cv::logPolar(
		dst,
		src2,
		cv::Point2f(src.cols*0.5f, src.rows*0.5f),
		M,
		CV_INTER_LINEAR | CV_WARP_INVERSE_MAP
	);

	cv::imshow("original image", src);
	cv::imshow("log-polar", dst);
	cv::imshow("inverse log-polar", src2);

	cv::waitKey();

	return 0;

}