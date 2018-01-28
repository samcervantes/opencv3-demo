// Here we include only the highgui library we need and use the cv namespace to save on typing
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main ( int argc, char** argv ) {
	// The -1 argument tells it to return the loaded image as-is (with alpha channel)
	Mat img = imread( argv[1], -1);
	if( img.empty() ) return -1;

	namedWindow( "Example1", cv::WINDOW_AUTOSIZE );
	imshow( "Example1", img );
	waitKey( 0 );

	destroyWindow( "Example1" );
}