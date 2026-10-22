#include <iostream>

using namespace std;

int main () {
    int age;
    cout << "enter your age :" << endl;
     cin >> age;

    if (age >= 18){
        cout << "you are eligible to vote\n" << endl;
    }
    else {
        cout << "you are not eligible to vote\n" << endl;
    }
    return 0;
}