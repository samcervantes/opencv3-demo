#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;

int main (int argc, char** argv) {
	if(argc != 7) {
		cout << 
			"Usage: " << argv[0] << " fixed_threshold invert(0=off|1=on) " 
			"adaptive_type(0=mean|1=gaussian) block_size offset image\n"
			"Example: " << argv[0] << " 100 1 0 15 10 fruits.jpg\n";
		return -1;
	}

	// Command line
	double fixed_threshold = (double)atof(argv[1]);
	int threshold_type = atoi(argv[2]) ? cv::THRESH_BINARY : cv::THRESH_BINARY_INV;
	int adaptive_method = atoi(argv[3]) ? cv::ADAPTIVE_THRESH_MEAN_C : cv::ADAPTIVE_THRESH_GAUSSIAN_C;
	int block_size = atoi(argv[4]);
	double offset = (double)atof(argv[5]);
	cv::Mat Igray = cv::imread(argv[6], CV_LOAD_IMAGE_GRAYSCALE);

	// Read in gray image
	if(Igray.empty()) {
		cout << "Can not load " << argv[6] << endl; return -1;
	}

	// Declare the output images
	cv::Mat It, Iat;

	// Thresholds
	cv::threshold(
		Igray,
		It,
		fixed_threshold,
		255,
		threshold_type
	);
	cv::adaptiveThreshold(
		Igray,
		Iat,
		255,
		adaptive_method,
		threshold_type,
		block_size,
		offset
	);

	// Show the results
	cv::namedWindow( "Raw", cv::WINDOW_AUTOSIZE );
	cv::namedWindow( "Threshold", cv::WINDOW_AUTOSIZE );
	cv::namedWindow( "Adaptive Threshold", cv::WINDOW_AUTOSIZE );

	cv::imshow("Raw", Igray);
	cv::imshow("Threshold", It);
	cv::imshow("Adaptive Threshold", Iat);

	cv::waitKey(0);

	cv::destroyWindow( "Raw" );
	cv::destroyWindow( "Threshold" );
	cv::destroyWindow( "Adaptive Threshold" );


	return 0;
}