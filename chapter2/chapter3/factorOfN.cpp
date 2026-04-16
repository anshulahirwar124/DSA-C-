#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter a number :";
    // cin >> n;
    // for(int i=1; i<=n; i+=1){
     //   if(n%i==0){
       //     cout << i << " ";
       // }
    
   int n;
   cout << "Enter a number :";
   cin >> n;
   bool flag = true; //true means prime
   for(int i=2; i<=n/2; i++){
    if(n%i==0){
        flag = false;
        break;
    }
   }   
if(flag==true){
    cout << "prime";
} else {
    cout << "composite";
}
}