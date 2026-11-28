// scope in local variable declaration sudu matro function er moddhe thake. function er baire thakle sei variable ta access kora jabe na.
#include <iostream>

using namespace std;
int main(){
    if (3 > 2){
        int a = 10;
        cout << a << endl;
    }
}

// scope in global variable declaration sudu matro function er baire thake. function er moddhe thakle sei variable ta access kora jabe.
#include <iostream>
using namespace std;

int a = 10;

int fun (){
    cout << a << endl;
    return 0;
}
int main (){
    cout << a << endl;
    fun();
    return 0;
}