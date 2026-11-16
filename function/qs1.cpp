// calculate sum of digits a number usibg pass by value
#include <iostream>
using namespace std;
int numSum(int n){
    int sum = n;
    while(n>0){
        sum += n % 10;
        n/= 10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter a number:";
    cin>>n;
    cout << "Sum of digits of " << n << " is: " << numSum(n) << endl;
    return 0;
}