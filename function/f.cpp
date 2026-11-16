//calculate n factoriral using function
#include <iostream>
using namespace std;

int factorialN(int n){
    int factorial = 1;
    for (int i = 1;i<=n; i++){
        factorial *= i;
    }
    return factorial;
}
int main (){
    cout << factorialN(5) << endl;
    cout << factorialN(6) << endl;
    return 0;

}

