// binary to decimal number converter
#include <iostream>
using namespace std;
int BinToDec(int BinNum){
    int ans = 0; int pow = 1;
    while (BinNum > 0){
        int rem = BinNum % 10;
        BinNum /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}
int main (){
    int BinNum = 111100;
    for (int i = 0; i < 10; i ++){
        cout << BinToDec(BinNum) << endl;
    }
        return 0;
}

// common binary number

