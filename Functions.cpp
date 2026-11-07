#include<iostream>
using namespace std;

// NOTES
//
//
//IN FUNCTIONS WE USE PASS BY VALUE AND PASS BY REFERENCE
//
//In PASS BY VALUE we send a COPY of parameters to the functions,
//  which does not harm/change our original parameter/values.
//
//In PASS BY REFERENCE we send the eference/address/pointer of
//  the variable to the function, any changein this pointer will 
//   reflect the changes throughout.
//
//
//DEFAULT VALUE -> While definition of code we can assign
// default value to the parameter;
//ex = void (int x, int y, int z = 10){...}; Default value will
// be used when none value is passed for that parameter

// void squares(int x){
//     for(int i = 1; i<=x; i++){
//         cout<<(i*i)<<endl;
//     }
// }
// void area(float);
// void circum(float);

// string is_adult(int n){
//     if(n>=18){
//         return "yes";
//     }
//     else{
//         return "no";
//     }
// }

bool is_prime(int);

int main(){


    cout<<"Enter : ";
    int n , m;
    cin>>n;
    cout<<" ";
    cin>>m;

    for(int i=n; i<=m; i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }

    // cout<<is_adult(n);
    // squares(n);
    // area(n);
    // cout<<endl;
    // circum(n);
    return 0;
}

// bool is_prime(int n){
//    for(int j =2; j<n; j++){
//     if(n%j==0){
//         return false;
//     }
//    }
//    return true;
// }

// void area(float r){
//     float ar = (r*r*22)/7;
//     cout<<ar;
// }

// void circum(float r){
//     float cir = (44*r)/7;
//     cout<<cir;
// }
