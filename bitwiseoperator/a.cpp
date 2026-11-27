// bitwise & operator when both bits are 1 then it will return 1 and when both bits are 0 or one bit is 0 then it will return 0
#include <iostream>
using namespace std;

int main (){
    int a = 4, b = 8;
    cout << (a & b) << endl;
    return 0; 
}


// bitwise  | operator when both bits are 0 then it will return 0 and when both bits are 1 or one bit is 1 then it will return 1
#include <iostream>
using namespace std;
int main (){
    int a = 4, b = 8;
    cout << (a | b) << endl;
    return 0;
}

// bitwise ^ operator when both bits are same then it will return 0 and when both bits are different then it will return 1
#include <iostream>
using namespace std;
int main () {
    int a = 4, b = 8;
    cout << ( a ^ b) << endl;
    return 0;
}


// bitwise << operator when we left shift the bits then it will add 0 in the right side of the number and the number will be multiplied by 2
#include <iostream>
using namespace std;
int main () {
    int a = 4, b= 8;
    cout << (a << b) << endl;
    return 0;
}

// bitwise >> operator when we right shift the bits then it will remove the bits from the right side of the number and the number will be divided by 2
#include <iostream>
using namespace std;
int main () {
    int a = 4, b= 8;
    cout << (a >> b) << endl;
    return 0;
}