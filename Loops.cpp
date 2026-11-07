// LOOPS AND PATTERN PRINTING IN CPP
#include<iostream>
using namespace std;
int main(){
    //question 1
    // 4
    // 6
    // ******
    // *    *
    // *    *
    // ******
    //.
    // int r,c;
    // cin>>r>>c;
    // for (int i = 1;i<=r;i++){
    //     for (int j = 1; j<=c;j++){
    //         if (i==1 || i==r || j==1 || j==c){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //QUESTION 2
    // *
    // **
    // ***
    // ****
    // int n;
    // cin>>n;
    // for (int i =1; i<=n; i++){
    //     for (int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //QUESTION 3
    // *****
    // ****
    // ***
    // **
    // *
    // int n;
    // cin>>n;
    // for (int i =n; i>0; i--){
    //     for (int j=i; j>0; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //QUESTION 4
    //  4
    //    *
    //   ***
    //  *****
    // *******
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=(2*i-1);j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //QUESTION 5
    // 1234567
    // 2345671
    // 3456712
    // 4567123
    // 5671234
    // 6712345
    // 7123456
    //.
    // int n;
    // cin>>n;
    // int m;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         m =(i+j-1);
    //         if(m>n){
    //             m=(m-n);
    //         }
    //         cout<<m;
    //     }
    //     cout<<endl;
    // }

    //QUESTION 6
    // 4
    // 6
    // 123456
    // 1    6
    // 1    6
    // 123456
    // int n,m;
    // cin>>n;
    // cin>>m;
    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=m; j++){
    //         if(i==1 || j==1 || i==n || j==m){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //QUESTION 7
    // 4
    // 6
    // 101010
    // 010101
    // 101010
    // 010101
    // int n,m,p;
    // cin>>n;
    // cin>>m;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         p=(i+j-1);
    //         if(p%2==1){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }

    //QUESTION 8
    // 4
    // 1
    // 12
    // 123
    // 1234
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //QUESTION 9
    // 4
    //    1
    //   121
    //  12321
    // 1234321
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     for(int j=i-1;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    
    //QUESTION 10
    // 5
    //     1
    //    2 2
    //   3   3
    //  4     4
    // 555555555        
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i;j++){
    //         if(j==1){
    //             cout<<i;
    //         }
    //         else{
    //             if(i==n){
    //                 cout<<i;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    //     for(int j=i-1;j>0;j--){
    //         if(i==n){
    //             cout<<i;
    //         }
    //         else{
    //             if(j==1){
    //                 cout<<i;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // } 




    return 0;
}