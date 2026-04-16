#include<iostream>
using namespace std;
int main(){
    // 1 3 5 7...
    // 4 7 10 13...
    int n;
    cout << "Enter n :";
    cin >> n;
    for(int i=4; i<=3*n-1; i+=3){
        cout << i << " ";
    }
}