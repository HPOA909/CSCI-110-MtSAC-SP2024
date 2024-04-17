#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream videoFile;
    double runningTime;
    int index = 1;
    double total = 0;
    videoFile.open("video_time.dat");

    while(videoFile >> runningTime){
        total += runningTime;
        cout << "The running time for video #" << index << "is" << runningTime << endl;
        index++;
    }
    videoFile.close();

    return 0;
}