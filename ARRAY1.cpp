#include<iostream>
using namespace std;

#include <vector>
#include <algorithm>

// ARRAY LECTURE 1

int main(){

    // int ara[] = {3,7,18,9,11,46,24,44,87,8,91,99};

    //ARRAY 1
  
    //FOR LOOP
    // for(int i= 0; i<(sizeof(ara)/sizeof(ara[0])); i++ ){
    //     cout<<ara[i]<<endl;
    // }

    // FOR EACH LOOP
    // for(int &j:ara){
    //     cout<<j<<endl;
    // };
    
    // char name[10];
    // for(int i=0 ; i<7; i++){
    //     cin>>name[i];
    // }
    //   
    // for(char &k:name){
    //     cin>>k;
    // }
    // for( char el:name){
    //     cout<<el<<" ";
    // }

    //MAX AND MIN IN ARRAY
    // int mx=ara[0];
    // int mn=ara[0];
    // for(int &k:ara){
    //     if(k>=mx){
    //         mx=k;
    //     }
    // }
    // for(int &f:ara){
    //     if(f<=mn){
    //         mn = f;
    //     }
    // }
    // cout<<"Greatest : "<<mx<<endl;
    // cout<<"lowest : "<<mn<<endl;

    //SEARCH IN ARRAY INT
    // int num;
    // int m =0;
    // cin>>num;
    // for(int &n:ara){
    //     if(num==n){
    //         m=1;
    //     }
    // }
    // if(m==1){
    //     cout<<num<<endl;
    // }
    // if(m==0){
    //     cout<<"-1"<<endl;
    // }

    //VECTORS (ARRAY 2)

    // vector<int> vec(11);
    // //
    // cout<<"size : "<<vec.size()<<endl;
    // cout<<"Capacity: "<<vec.capacity()<<endl;
    //
    // vec.push_back(1);
    // //
    // vector<int> v(10);
    //
    // for(int i = 0; i<5; i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    //
    // for(int j = 0; j<5; j++){
    //     cout<<v[j]<<"  ";
    // }
    // cout<<endl;
    //
    // v.insert(v.begin()+3,99);
    //
    // for(int k:v){
    //     cout<<k<<"   ";
    // }
    // cout<<endl;
    //
    // v.erase(v.end()-4);
    //
    // int id = 0;
    // while( id  < v.size()){
    //     cout<<v[id++]<<"    ";
    // }

    //QUES
    // for(int i =0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // int num;
    // cout<<"Enter: ";
    // cin>>num;
    // int idx;
    // int m = 0;
    // int great = 0;
    // int temp = -1;
    // int sort = 1;
    // for(int k=0; k<v.size(); k++){
    //     if(num==v[k]){
    //         m = m + 1;
    //         idx = k;
    //     }
    //     if(v[k]>num){
    //         great += 1;
    //     }
    //     if(v[k]<temp){
    //         sort = 0;
    //     }
    //     temp = v[k];   
    // }
    // if(m == 0){
    //     cout<<"NOT FOUND";
    // }
    // else{
    //     cout<<"Total Occurance "<<m<<endl;
    //     cout<<"last found at "<<idx+1<<endl;
    //     cout<<"Nums Greater are "<<great<<endl;
    // }
    // if(sort == 1){
    //     cout<<"ARRAY SORTED";
    // }
    // else{
    //     cout<<"NOT SORTED SHII";
    // }

    // int array[] = {1,2,3,4,5,6,7,8};
    // int total = 0;
    // for(int i = 0; i<8; i++){
    //     if(i%2==0){
    //         total += array[i];
    //     }
    //     else{
    //         total -=array[i];
    //     }
    // }
    // cout<<total;

    //ARRAY/VECTOR 3

    // Q] SUM OF TWO EQUALS TARGET
    //
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int target;
    // int count = 0;
    // cout<<"Enter Target Value :  ";
    // cin>>target;
    //
    // for(int i = 0; i <(sizeof(arr)/sizeof(arr[0])) ; i++){
    //     for(int j = i +1 ; j<(sizeof(arr)/sizeof(arr[0])); j++){
    //         if ( arr[i] + arr[j] == target){
    //             count += 1;
    //         }
    //     }
    // }
    // cout<<"Total Pairs = "<<count<<endl;

    // Q] NUMBER OF TRIPLTS WHOSE SUM EQUALS VALUE X
    //
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int x;
    // int count = 0;
    // cout<<"ENTER :  ";
    // cin>>x;
    //
    // for ( int i = 0; i < (sizeof(arr)/sizeof(arr[0])) ; i++){
    //     for ( int j = i+1; j < (sizeof(arr)/sizeof(arr[0])) ; j++){
    //         for ( int k = j+1 ; k < (sizeof(arr)/sizeof(arr[0])) ; k++){
    //             if( arr[i] + arr[j] + arr[k] == x){
    //                 count++;
    //             }        
    //         }       
    //     }
    // }
    // cout<<"Pairs = "<<count<<endl;

    // Q] FIND THE NUMBER NOT BEING REPEATED IN ARRAY
    //
    // int arr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    // M1
    // for( int i =0; i< (sizeof(arr)/sizeof(arr[0])); i++){
    //     int m = 0;
    //     for( int j = 0; j< (sizeof(arr)/sizeof(arr[0])); j++){
    //         if( arr[i] == arr[j]){
    //             m++;
    //         }
    //     }
    //     if(m == 1){
    //         cout<<" The Num is : "<< arr[i]<<endl;
    //     }
    // }
    //
    //M2
    // for( int i =0; i< (sizeof(arr)/sizeof(arr[0])); i++){
    //     for( int j = i+1; j< (sizeof(arr)/sizeof(arr[0])); j++){
    //         if( arr[i] == arr[j]){
    //             arr[i]=arr[j]=-1;
    //         }
    //     }
    // }
    // for(int k = 0;  k< (sizeof(arr)/sizeof(arr[0])); k++ ){
    //     if(arr[k]>-1){
    //         cout<<arr[k]<<endl;
    //     }
    // }

    // Q] TO FIND THE 2ND LARGEST NUM IN ARRAY
    //
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int max = arr[0];
    // int max2 = arr[0];
    // for( int i = 0; i<9 ; i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // for( int j=0; j<9; j++){
    //     if(arr[j]>=max2 && arr[j]<max){
    //         max2 = arr[j];
    //     }
    // }
    // cout<<max<<endl<<max2;

    // Q] ROTATE ARRAY BY K STEPS
    // int a[] = {1,2,3,4,5,6,7,8,9};
    // int k;
    // cout<<"Enter k :  ";
    // cin>>k;
    //M1
    // for(int j = 0; j<k; j++){
    //     //rotate once
    //     int t = a[0];
    //     for(int i =1; i<9; i++){
    //         a[i-1] = a[i];
    //     }
    //     a[8] = t;
    // }
    // for(int el:a){
    //     cout<<el<<endl;
    // }
    //
    //M2
    //
    // int b [9];
    // for (int i =0; i<9; i++){
    //     if((i+k)<9){
    //         b[i] = a[i+k];
    //     }
    //     else{            
    //         b[i] = a[i+k-9];
    //     }                
    // }    
    // for(int el:b){
    //     cout<<el<<endl;
    // }
    //
    // M3 OOOHHHH VECTOR METHOD
    //
    // vector<int> v;
    // for(int i =1; i<+9; i++){
    //     v.push_back(i);
    // }
    // int k =2;
    // k = k%v.size();
    // //
    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    // //
    // for(int el:v){
    //     cout<<el<<endl;
    // }

    // Q] Q QUERIES, CHECK THE NUM IN ARR (Q MAYBE 1E5 + 10 )
    // int n; 
    // cin>>n;
    // //
    // vector<int> v(n);
    // for(int i =0; i<n; i++){
    //     cin>>v[i];
    // }
    // //
    // const int N = 1e5 + 10;
    // vector<int> freq(N,0);
    // for(int i=0; i<n; i++){
    //     freq[v[i]]++;
    // }
    // //
    // cout<<"Enter queries: ";
    // int q;
    // cin>>q;
    // //
    // while(q--){
    //     int qele;
    //     cin>>qele;
    //     cout<<freq[qele]<<endl;
    // }
    
    


    return 0;
}