// decimal to binary number converter 
#include <iostream>

using namespace std;

int DecToBin(int DecNum){
    int ans = 0; int pow = 1;

    while(DecNum > 0){
        int rem = DecNum % 2;
        DecNum /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
int main (){
    int DecNum = 60;
    for (int i = 0; i < 10; i ++){
        cout << DecToBin(DecNum) << endl;
    }
        return 0;
}