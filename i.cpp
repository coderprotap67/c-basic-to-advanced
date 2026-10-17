// input in c++ ইউজারের কাছ থেকে ইনপুট নেওয়ার জন্য cin এবং ইনপুট অপারেটর >> (Extraction Operator) ব্যবহার করা হয়। এটি <iostream> হেডার ফাইলের অন্তর্ভুক্ত এবং সাধারণত std নেমস্পেসের অধীনে থাকে


// #include <iostream>
// using namespace std;

// int main () {
//     int age;
//     cout << "enter your age : ";

//     cin >>age;

//     cout << "your age is :" << age <<endl;

//     return 0;

// }


#include <iostream>

using namespace std;

int main() {
    double price ;
    cout << "enter your price ";
    cin>>price;
    cout << "your price is " << price << endl;
    return 0;
}