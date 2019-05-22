#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
  
#include <iostream>  
  
using namespace cv;  
using namespace std;  
  
int main(int argc, char** argv)  
{  
    string first_file = "F:\\ppt\\code\\text\\text\\text\\img\\%04d.jpg";   
    VideoCapture sequence(first_file);  
  
    if (!sequence.isOpened())  
    {  
        cerr << "Failed to open the image sequence!\n" << endl;  
        return 1;  
    }  
  
    Mat image;  
    namedWindow("Image sequence", 1);  
  
    for(;;)  
    {  
  
        sequence >> image;  
  
        if(image.empty())  
        {  
            cout << "End of Sequence" << endl;  
            break;  
        }  
  
        imshow("Image sequence", image);  
        waitKey(500);  
    }  
  
    return 0;  
}  
