#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////// Draw shapes and text //////////////////////

void main() {

	// Blank image
	Mat img(512, 512, CV_8UC3, Scalar(255,255,255));
	circle(img, Point(256, 256), 155, Scalar(155, 100, 102),FILLED);
	rectangle(img, Point(145, 544), Point(255, 155), Scalar(155, 456, 214),5);
	line(img, Point(120, 220), Point(230, 520), Scalar(255, 255, 255), 10);
	putText(img, "Thivakaran", Point(125, 321), FONT_HERSHEY_DUPLEX,1, Scalar(125, 221, 221), 2,false);
	imshow("Image", img);
	waitKey(0);
}