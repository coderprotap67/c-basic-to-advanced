// calculate of sum two numbers  1to n using function
#include <iostream>
using namespace std;

int sumOfTwoNumbers(int n){
    int sum = 0;
    for(int i =1; i<n; i++){
        sum +=i;
    }
    return sum;
}
int main(){
    int n;
    cout << "enter the number";
    cin >>n;
    cout << " sum of two numbers from 1 to "<< n << " is " << sumOfTwoNumbers(n) <<endl;
    return 0;
}