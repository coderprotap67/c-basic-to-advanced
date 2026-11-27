// two's complement
#include <iostream>

using namespace std;
int TwosCom (int BinNum){
    int ans = 0; int pow = 1;
    while (BinNum > 0){
        int rem = BinNum % 10;
        BinNum /= 10;
        if (rem == 0){
            ans += 1 * pow;
        }
        else {
            ans += 0 * pow;
        }
        pow *= 2;
    }
    return ans;
}
int main (){
    int BinNum = 111100;
    cout << "The two's complement of " << BinNum << " is: " << TwosCom(BinNum) << endl;
    return 0;
}