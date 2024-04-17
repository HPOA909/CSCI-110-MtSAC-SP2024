#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream videoFile;
    int numVideo;
    double runningTime;

    cout << "Enter the number of videos " << endl;
    cin >> numVideo;

    videoFile.open("videos_time.dat");
    for (int counter=1;counter<=numVideo;counter++){
        cout << "Enter the running time for video #" << counter << endl;
        cin >> runningTime;
        videoFile << runningTime << endl;
    }
    videoFile.close();

    return 0;
}