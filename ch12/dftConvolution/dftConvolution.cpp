#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	if (argc != 2) {
		cout << "Fourier Transform\nUsage: " << argv[0] << "<imagename>" << endl;
		return -1;
	}

	// read image as grayscale (using 0 flag)
	cv::Mat A = cv::imread(argv[1], 1);

	if(A.empty()) {
		cout << "Cannot load " << argv[1] << endl;
		return -1;
	}

	// grab a 100x100 rectangle from the input image (top left corner at image center)
	cv::Size patchSize(100, 100);
	cv::Point topleft(A.cols/2, A.rows/2);
	cv::Rect roi(topleft.x, topleft.y, patchSize.width, patchSize.height);
	cv::Mat B = A(roi);

	cv::imshow("A", A);
	cv::imshow("B", B);

	int dft_M = cv::getOptimalDFTSize(A.rows+B.rows-1);
	int dft_N = cv::getOptimalDFTSize(A.cols+B.cols-1);

	cv::Mat dft_A = cv::Mat::zeros(dft_M, dft_N, CV_32F);
	cv::Mat dft_B = cv::Mat::zeros(dft_M, dft_N, CV_32F);

	cv::Mat dft_A_part = dft_A(cv::Rect(0, 0, A.cols, A.rows));
	cv::Mat dft_B_part = dft_B(cv::Rect(0, 0, B.cols, B.rows));

	A.convertTo(dft_A_part, dft_A_part.type(), 1, -mean(A)[0]);
	B.convertTo(dft_B_part, dft_B_part.type(), 1, -mean(B)[0]);

	cv::dft(dft_A, dft_A, 0, A.rows);
	cv::dft(dft_B, dft_B, 0, B.rows);

	cv::imshow("dft_A", dft_A);
	cv::imshow("dft_B", dft_B);

	// set the last parameter to false to compute convolution instead of correlation
	cv::mulSpectrums(dft_A, dft_B, dft_A, 0, true);
	cv::imshow("multSpectrums", dft_A);

	cv::idft(dft_A, dft_A, cv::DFT_SCALE, A.rows + B.rows - 1);

	cv::imshow("idft", dft_A);

	cv::Mat corr = dft_A(cv::Rect(0, 0, A.cols + B.cols -1, A.rows + B.rows -1));
	cv::normalize(corr, corr, 0, 1, cv::NORM_MINMAX, corr.type());
	cv::pow(corr, 3., corr);

	B ^= cv::Scalar::all(255);

	cv::imshow("Image", A);
	cv::imshow("Correlation", corr);
	cv::waitKey();
	return 0;

}