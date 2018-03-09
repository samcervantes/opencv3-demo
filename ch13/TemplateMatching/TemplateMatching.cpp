#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

void help(char** argv) {
	cout << "\n"
		<< "Example of using matchTemplate(). The call is:\n"
		<< "\n"
		<< argv[0] << " template_image_to_be_searched\n"
		<< "\n"
		<< "This routine will search using all methods:\n"
		<< "  cv::TM_SQDIFF			0\n"
		<< "  cv::TM_SQDIFF_NORMED	1\n"
		<< "  cv::TM_CCORR			2\n"
		<< "  cv::TM_CCORR_NORMED	3\n"
		<< "  cv::TM_CCOEFF			4\n"
		<< "  cv::TM_CCOEFF_NORMED	5\n"
		<< "\n";
}

// Display the results of the matches
int main (int argc, char** argv) {
	if(argc != 3) {
		help(argv);
		return -1;
	}

	cv::Mat src, temp1, ftmp[6];	//ftmp is what to display on

	// Read in the template to be used for matching:
	if((temp1=cv::imread(argv[1], 1)).empty()) {
		cout << "Error on reading template " << argv[1] << endl;
		help(argv);
		return -1;
	}

	// Read in the source image to be searched:
	if((src=cv::imread(argv[2], 1)).empty()) {
		cout << "Error on reading src image " << argv[2] << endl;
		help(argv);
		return -1;
	}

	// Do the matching of the template with the image
	for(int i=0; i<6; ++i) {
		cv::matchTemplate(src, temp1, ftmp[i], i);
		// Normalize the values (0-1)
		cv::normalize(ftmp[i], ftmp[i], 1, 0, CV_MINMAX);
	}

	/*
	cv::Size size = temp1.size();
	int width = size.width;
	int height = size.height;

	cv::rectangle(
		ftmp[5],
		cvPoint(0,0),
		cvPoint(width,height),
		cvScalar(255, 255, 255),
		1,
		8
	);
	*/

	// Display
	cv::imshow("Template", temp1);
	cv::imshow("Image", src);
	cv::imshow("SQDIFF", ftmp[0]);
	cv::imshow("SQDIFF_NORMED", ftmp[1]);
	cv::imshow("CCORR", ftmp[2]);
	cv::imshow("CCORR_NORMED", ftmp[3]);
	cv::imshow("CCOEFF", ftmp[4]);
	cv::imshow("CCOEFF_NORMED", ftmp[5]);

	// Threshold the image
	double threshold_value = 0.99;
	int threshold_type = 0;
	int const max_BINARY_value = 255;
	cv::Mat src_gray1;
	cv::Mat dst_thresh;

	//cv::cvtColor(ftmp[5], src_gray1, CV_BGR2GRAY);

	cv::threshold(ftmp[5], dst_thresh, threshold_value, max_BINARY_value, CV_THRESH_BINARY);
	
	cv::imshow("Threshold", dst_thresh);

	cout << "--- Image properties ---" << endl;
	cout << "Size: " << dst_thresh.size << endl;
	cout << "Rows: " << dst_thresh.rows << endl;
	cout << "Cols: " << dst_thresh.cols << endl;
	cout << "Channels: " << dst_thresh.channels() << endl;	

	// Let the user view the results
	cv::waitKey(0);

}