#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "enter n :";
    // cin >> n;
    // if(n > 99 && n < 1000){
    //     cout << "it is a three digit number";
    // } else {
    //     cout << "it is not a three digit number";
    // }

 int n;
 cout << "enter n :";
 cin >> n;
 if(n%3==0 && n%5==0){
    cout << "it is divisible by 3 and 5" <<endl;
 } else{
    cout << "it is not divisible by 3 and 5" <<endl;
   }
} 