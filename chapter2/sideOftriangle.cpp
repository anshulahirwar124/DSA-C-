#include<iostream>
using namespace std;
int main(){
//     int a,b,c;
//     cout << "enter 1st side :";
//     cin >> a;
//     cout << "enter 2nd side :";
//     cin >> b;
//     cout << "enter 3rd side :";
//     cin >> c;
//     if((a+b)>c && (b+c)>a && (c+a)>b){
//         cout << "valid triangle";
//     } else {
//         cout << "invalid triangle";
//     }
 
// int a,b,c;
// cout << "enter 1st number :";
// cin >> a;
// cout << "enter 2nd number :";
// cin >> b;
// cout << "enter 3rd number :";
// cin >> c;
// if(a>b && a>c){
//     cout << "a is greatest";
// } else if(b>a && b>c){
//     cout << "b is greatest";
// }else{
//      cout << "c is greatest";
// }
// }

 int a,b,c;
 cout << "enter 1st number :";
 cin >> a;
 cout << "enter 2nd number :";
 cin >> b;
 cout << "enter 3rd number :";
cin >> c;
if(a<b && a<c){
    cout << "a is minimum";
} else if(b<a && b<c){
    cout << "b is minimum";
}else{
     cout << "c is minimum";
}
}