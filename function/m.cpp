// function call
#include <iostream>
using namespace std;

double sum (double a, double b){
    double s = a + b;
    return s;
}

int minOfTwo(int a, int b){
    if (a < b)
    return a;
    else{
        return b;
    }
}
int main() {
    cout <<sum (44.9,55.5) << endl;
    cout << minOfTwo(44,55) << endl;
    return 0;

}
