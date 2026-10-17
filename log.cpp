// logical operators 

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // logical AND operator
    if (a < 15 && b > 15) {
        cout << "Both conditions are true." << endl;
    }

    // logical OR operator
    if (a < 15 || b < 15) {
        cout << "At least one condition is true." << endl;
    }

    // logical NOT operator
    if (!(a > 15)) {
        cout << "Condition is false." << endl;
    }

    return 0;
}