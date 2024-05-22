#include <iostream>
#include <string>
using namespace std;

class GradeActivity{
private:
    double score;
public:
    void setScore(int s){
        score = s;
    }
    int getScore(){
        return score;
    }
    string getGrades(){
        string grade;
        if (score >= 90){
            grade = "A";
        }else if (score >= 80){
            grade = "B";
        }else if (score >= 70){
            grade = "C";
        }else if (score >= 60){
            grade = "D";
        }else{
            grade = "F";
        }
        return grade;
    }
};

int main(){
    int testScore;
    GradeActivity test;
    test = GradeActivity();

    cout << "Enter a numeric test score: ";
    cin >> testScore;

    test.setScore(testScore);

    cout << "The grade for the test is " << test.getGrades() << endl;

    return 0;
}