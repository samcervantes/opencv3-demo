#include <opencv2/opencv.hpp>
#include <iostream>

int main( int argc, char** argv ) {

	cv::namedWindow( "Example2_10", cv::WINDOW_AUTOSIZE );

	cv::VideoCapture cap;
	if (argc==1) {
		std::cout << "Opening camera...";
		cap.open(0); // open the first camera
	} else {
		cap.open(argv[1]);
	}

	// Check if we succeeded
	if (!cap.isOpened()) {
		std::cerr << "Couldn't open capture." << std::endl;
		return -1;
	}

	cv::Mat frame, frame_morph;

	for(;;) {
		cap >> frame;
		if( frame.empty() ) break; // Ran out of film

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
			frame,			// input image
			frame_morph,			// result image
			op,				// operator (e.g. cv::MOP_OPEN)
			element,		// structuring element, cv::Mat()
			anchor,			// location of anchor point
			iterations,		// number of times to apply
			borderType, 	// border extrapolation
			borderValue
		);

		cv::imshow( "Example2_10", frame_morph );
		if( cv::waitKey(33) >= 0 ) break;
	}
	return 0;

}