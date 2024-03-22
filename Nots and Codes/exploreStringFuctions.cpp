#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Everything";

    cout << "position 4 character is " << s.at(4) << endl;
    cout << "size: " << s.size() << endl;
    cout << "i is in position " << s.find('i') << endl;
    cout << s.substr(3,5) << endl;
    s.push_back('i');
    cout << s << endl;
    cout << s.size() << endl;

    string s1 = "hello";
    string s2 = "there!";
    cout << "Before append: " << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    s1.append(s2);
    cout << s1 << endl;
    cout << s2 << endl;

    string s3 = "good";
    string s4 = "bye!";
    cout << "Before append: " << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    string s5 = s3 + s4;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    s3.insert(1,"---");
    cout << s3 << endl;

    string str = "bAcKwArD";
    for (int i=0 ; i< str.size() ; i++){
        str.at(i) = tolower(str.at(i));
    }
    cout << "lower case: " << str << endl;

    for (int i=0 ; i< str.size() ; i++){
        str.at(i) = toupper(str.at(i));
    }
    cout << "upper case: " << str << endl;

    bool valid = false;
    string string1;
    cout << "Enter a word: " << endl;
    cin >> string1;
    for (int i = 0; i < string1.size(); i++){
        if (isdigit(string1.at(i)))
            valid = true;
    }
    if (valid)
        cout << "Your string did have a digit!" << endl;
    else
        cout << "Your string did not have a digit!" << endl;

    return 0;
}