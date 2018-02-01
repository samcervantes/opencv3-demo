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

	cv::Mat frame, frame_down, frame_canny;

	for(;;) {
		cap >> frame;
		if( frame.empty() ) break; // Ran out of film

		// Lets do some fun stuff

		cv::pyrDown(frame, frame_down);
		cv::pyrDown(frame_down, frame_down);

		cv::Canny(frame_down, frame_canny, 10, 100, 3, true);

		cv::imshow( "Example2_10", frame_canny );
		if( cv::waitKey(33) >= 0 ) break;
	}
	return 0;

}