#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){

    int m,n;
    cout<<"Enter Size Arr1 :  ";
    cin>>m;
    vector<int> arr1;
    for(int i = 0; i<m; i++){
        int t;
        cin>>t;
        arr1.push_back(t);
    }
    vector<int> arr2;
    cout<<"Enter Size Arr2 :  ";
    cin>>n;
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        arr2.push_back(t);
    }
    int a = m-1;
    int b = n-1;
    vector<int> arr;
    while(a>=0 && b>=0){
        if(arr1[a]>arr2[b]){
            arr.push_back(arr1[a]);
            a--;
        }
        else if(arr1[a]<arr2[b]){
            arr.push_back(arr2[b]);
            b--;
        }
        else if(arr1[a]==arr2[b]){
            arr.push_back(arr1[a]);
            arr.push_back(arr2[b]);
            a--;
            b--;
        }
    }
    if(a>=0){
        while(a>=0){
            arr.push_back(arr1[a]);
            a--;
        }
    }
    if(b>=0){
        while(b>=0){
            arr.push_back(arr2[b]);
            b--;
        }
    }
    reverse(arr.begin(), arr.end());
    for(int k = 0; k<arr.size(); k++){
        cout<<arr[k]<<" ";
    }
    return 0;

    // // Q] Given arr inc sort, n size, find if there exist a pair whose sum equals x
    // //
    // int n; 
    // cout<<"Enter n :  ";
    // cin>>n;
    // vector<int> arr;
    // cout<<endl<<"Enter Array "<<endl;
    // for(int i = 0; i<n; i++){
    //     int t;
    //     cin>>t;
    //     arr.push_back(t);
    // }
    // int x;
    // cout<<"To Find :  ";
    // cin>>x;
    // for(int j = 0; j<n; j++){
    //     int k = x - arr[j];
    //     for(int f = j; f<n; f++){
    //         if ( k == arr[f]){
    //             cout<<"Pairs Found :  "<<arr[j]<<" "<<arr[f]<<endl;
    //         }
    //     }
    // }

    // // Q] DIFF == X;
    // int n; 
    // cout<<"Enter n :  ";
    // cin>>n;
    // vector<int> arr;
    // cout<<endl<<"Enter Array "<<endl;
    // for(int i = 0; i<n; i++){
    //     int t;
    //     cin>>t;
    //     arr.push_back(t);
    // }
    // int x;
    // cout<<"To Find :  ";
    // cin>>x;
    // for(int j = 0; j<n; j++){
    //     for( int i = j+1; i<n; i++){
    //         if(arr[i] - arr[j] == x || arr[j] - arr[i] == x){
    //             cout<<"pairs found :  "<<arr[j]<<" "<<arr[i]<<endl;
    //         }
    //         else{
    //             cout<<"NOT found"<<endl;
    //         }
    //     }
    // }

    // // sq sort;
    // int n; 
    // cout<<"Enter n :  ";
    // cin>>n;
    // vector<int> arr;
    // for(int i =0; i<n; i++){
    //     int t;
    //     cin>>t;
    //     arr.push_back(t);
    // }
    // // sq
    // for(int j =0; j<arr.size(); j++){
    //     arr[j] = (arr[j]*arr[j]);
    // }
    // //sort
    // int lptr = 0;
    // int rptr = n-1 ;
    // vector<int> sol;
    // while(lptr<=rptr){
    //     if(arr[lptr]<arr[rptr]){
    //         sol.push_back(arr[rptr]);
    //         rptr--;
    //     }
    //     else if(arr[lptr]>arr[rptr]){
    //         sol.push_back(arr[lptr]);
    //         lptr++;
    //     }
    //     else if( arr[lptr] == arr[rptr]){
    //         sol.push_back(arr[lptr]);            
    //         lptr++;            
    //     }
    // }
    // reverse(sol.begin(), sol.end());
    // for(int f = 0; f<sol.size(); f++){
    //     cout<<sol[f]<<" ";
    // }

    // // Q] INCREASING VECTOR ARRAY GIVEN ; FIND TRIPLET == X; DONT USE 3 LOOPS; 
    // 
    // int n; 
    // cout<<"Enter n :  ";
    // cin>>n;
    // vector<int> arr;
    // cout<<"Enter Array"<<endl;
    // for(int i =0; i<n; i++){
    //     int t;
    //     cin>>t;
    //     arr.push_back(t);
    // }
    // int x;
    // cout<<"Sum to be Found :  ";
    // cin>>x;
    
    // // M1 s
    // for(int i =0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         for(int k = j+1; k<n; k++){
    //             if(arr[i]+arr[j]+arr[k] == x){
    //                 cout<<"Triplet Found :  "<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<x<<endl;
    //             }
    //         }
    //     }
    // }

    // //M2 s
    // //
    // for(int i = 0; i<n-2; i++){
    //     int lptr = i + 1;
    //     int rptr = n-1;
    //     while(lptr<rptr){
    //         int sum = arr[i] + arr[lptr] + arr[rptr];
    //         if(sum<x){
    //             lptr++;
    //         }
    //         else if(sum>x){
    //             rptr--;
    //         }
    //         else if(sum == x){
    //             cout<<"Triplet Found :  "<<arr[i]<<" + "<<arr[lptr]<<" + "<<arr[rptr]<<" = "<<x<<endl;
    //             lptr++;
    //             rptr--;
    //         }
    //     }
    // }
}

