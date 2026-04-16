 #include<iostream>
 using namespace std;
 int main(){
//     for(int i=1; i<=20; i+=1){
//         if(i==3 || i==8){
//             continue;
//         }
//         cout << i << " ";
//     }

for(int i=1; i<=100; i++){
    if(i%2==0) continue;
    cout << i << " ";
}
 }