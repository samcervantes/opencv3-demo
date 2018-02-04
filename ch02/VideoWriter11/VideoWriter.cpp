#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
	cv::namedWindow("Example2_11", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Log_Polar", cv::WINDOW_AUTOSIZE);

	// Note: could capture from a camera by giving a camera id as an integer
	cv::VideoCapture capture(0);

	double fps = capture.get(cv::CAP_PROP_FPS);
	cv::Size size(
		(int)capture.get(cv::CAP_PROP_FRAME_WIDTH),
		(int)capture.get(cv::CAP_PROP_FRAME_HEIGHT)
	);

	cv::VideoWriter writer;
	writer.open(argv[1], CV_FOURCC('M','J','P','G'), fps, size);

	cv::Mat logpolar_frame, bgr_frame;

	// Loop through all frames in the image
	for(;;) {
		capture >> bgr_frame;
		if(bgr_frame.empty()) break; //end if done

		cv::imshow("Example2_11", bgr_frame);

		// Run a log-polar transformation just for fun
		cv::logPolar(
			bgr_frame,				// Input color frame
			logpolar_frame,			// Output log-polar frame
			cv::Point2f(			// Centerpoint for log-polar transformation
				bgr_frame.cols/2,
				bgr_frame.rows/2
			),
			40,						// Magnitude (scale parameter)
			cv::WARP_FILL_OUTLIERS	// Fill outliers with 'zero'
		);

		cv::imshow("Log_Polar", logpolar_frame);
		writer << logpolar_frame;

		char c = cv::waitKey(10);
		if(c==27) break;			// Allod the user to break out
	}
	capture.release();
}