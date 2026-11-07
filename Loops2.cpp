#include<iostream>
using namespace std;
int main(){
    //QUESTION 1
    //Count the number of digits for a given number n
    // int n,m;
    // cout<<"Enter : ";
    // cin>>n;
    // m = n;
    // for(int i =1;m!=0; i++){
    //     m=(m/10);
    //     if(m==0){
    //         cout<<i;
    //     }
    // }

    //  OR

    // int n,m;
    // m=0;
    // cin>>n;
    // while(n>0){
    //     m++;
    //     n=n/10;
    // }
    // cout<<m;

    //QUESTION 2
    //Find the sum of digits in a given number n

    // int n,sum;
    // sum = 0;
    // cout<<"Enter : ";
    // cin>>n;
    // while(n>0){
    //     sum = sum + (n%10);
    //     n = n/10;
    // }
    // cout<<sum;

    //QUESTION 3
    //Reverse the digits of a number
    // int n, temp;
    // cout<<"Enter : ";
    // cin>>n;
    // temp =0;
    // while(n>0){
    //     temp = temp*10 + n%10;
    //     n= n/10;
    // }
    // cout<<temp;


    //QUESTION 4
    //find the sum of S = 1-2+3-4+5-6+7-8...n;

    //M1
    // int n,sum;
    // sum= 0;
    // cout<<"Enter : ";
    // cin>>n;
    // if (n%2==0){
    //     sum = -1*(n/2);
    // }
    // else {
    //     sum = n-((n-1)/2);
    // }
    // cout<<sum;

    //M2
    // int n,sum;
    // sum= 0;
    // cout<<"Enter : ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //         sum = sum - i;
    //     }
    //     else{
    //         sum = sum + i;
    //     }
    // }
    // cout<<sum;

    //QUESTION 5 
    //Print the first n factorial numbers
    // int n,fac;
    // fac= 1;
    // cout<<"Enter : ";
    // cin>>n;
    // for(int i = 1; i<=n; i++){
    //     cout<<" ";
    //     fac = fac*i;
    //     cout<<fac;
    // }

    //QUESTION 6
    //a to the power b;
    // int a,b,res;
    // res = 1;
    // cin>>a;
    // cin>>b;
    // for(int i = 1; i<=b; i++){
    //     res = res*a;
    // }
    // cout<<res;

    //QUESTION 7
    //    A
    //   ABC
    //  ABCDE
    //   ABC 
    //    A

    int n;
    cout<<"Enter : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        char alpha = 'A';
        for(int j=1; j<=2*i-1; j++){
            cout<<alpha;
            alpha = alpha +1;
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j= 1; j<=i; j++){
            cout<<" ";
        }
        char alpha = 'A';
        for(int k = (((n-i)*2)-1); k>0; k--){
            cout<<alpha;
            alpha = alpha +1;           
        }
        cout<<endl;
    }


    //QUESTION 8
    //     *
    //     *
    // * * * * * 
    //     * 
    //     * 

    // int n;  
    // cout<<"Enter : ";
    // cin>>n;

    //for n = 2;
    // for(int i=1; i<=(2*n+1); i++){
    //     if(i!=(n+1)){
    //         for(int j=1; j<=n; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*"<<endl;
    //     }
    //     if(i==n+1){
    //         for(int j=1; j<=(2*n+1); j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }        
    // }

    //for n = 5;
    // for(int i=1; i<=n; i++){
    //     if(i==(n/2)+1){
    //         for(int j=1; j<=n; j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int j=1; j<=(n/2); j++){
    //             cout<<" ";
    //         }
    //         cout<<"*"<<endl;
    //     }
    // }

    

    return 0;
}