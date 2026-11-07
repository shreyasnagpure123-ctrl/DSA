#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

// TWO POINTERS 

//SORT AN ARRAY OF 0s & 1s

// void sort(vector<int> &v){
//     //
//     int no_zero = 0;
//     //
//     for(int k=0; k<v.size(); k++){
//         if(v[k]==0){
//             no_zero = no_zero + 1;
//         }
//     }
//     // cout<<no_zero<<endl;
//     for(int i=0; i<v.size(); i++){
//         if( i < no_zero ){
//             v[i] = 0;
//         }
//         else{
//             v[i] = 1;
//         }
//     }
// }

// void swap(int &x, int &y){
//     int t;
//     t= x;
//     x=y;
//     y=t;
// }

// void evenodd_sort(vector<int> &v){
//     //
//     // int lpt = 0;
//     // int rpt = v.size()-1;
//     // //
//     // while(lpt<rpt){
//     //     if(v[lpt]%2==1 && v[rpt]%2==0){
//     //         swap(v[lpt],v[rpt]);
//     //         lpt++;
//     //         rpt--;
//     //     }
//     //     if(v[lpt]%2==0){
//     //         lpt++;
//     //     }
//     //     if(v[rpt]%2==1){
//     //         rpt--;
//     //     }
//     // }
//     //
//     //WRONG CODE ==
//     //ONE DAY WILL CODE THIS Q WITH THIS LOGIC IE IMPROV THE CODE!!!
//     //
//     // int t =0;
//     // for(int i=0; i<v.size(); i++){
//     //     if(v[i]%2==1){
//     //     //
//     //     t=v[i];
//     //     v.erase(v.begin()+i);
//     //     v.push_back(t);   
//     //     }       
//     // }
//     //
// }

// void sq_sort(vector<int> &v){
//     // squaring
//     int t;
//     for(int i =0; i<v.size(); i++){
//         t = v[i];
//         v[i] = (t*t);
//     }
//     //sort
//     int lptr = 0;
//     while(lptr<v.size()){
//         // 
//         for(int j = 1+lptr; j<v.size(); j++){
//             int rptr = j;
//             if(v[lptr]>v[rptr]){
//                 swap(v[lptr],v[rptr]);
//                 j= lptr;
//             }          
//         }
//         lptr++;
//     }
// }

// void sq_sort2(vector<int> &v){
    
//     // //M1
//     //
//     //mod the array altough no need
//     // for( int i = 0; i<v.size(); i++){
//     //     if(v[i]<0){
//     //         v[i]=(-1*v[i]);
//     //     }
//     // }
//     //squaring
//     // for(int f=0; f<v.size(); f++){
//     //     v[f]=(v[f]*v[f]);
//     // }
//     //
//     //sorting for increasing
//     // vector<int> s;
//     // int lptr=0;
//     // int rptr = v.size()-1;
//     // while(lptr<=rptr){
//     //     if(v[lptr]<v[rptr]){
//     //         s.push_back(v[rptr]);
//     //         rptr--;
//     //     }
//     //     else{
//     //         s.push_back(v[lptr]);
//     //         lptr++;
//     //     }
//     // }
//     // reverse(s.begin(),s.end());
//     // for(int k=0; k<s.size(); k++){
//     //     v[k]=s[k];
//     // }

//     // //M2
//     // //
//     // vector<int> s;
//     // //
//     // int lptr=0;
//     // int rptr=v.size()-1;
//     // while(lptr<=rptr){
//     //     if(abs(v[lptr])<abs(v[rptr])){
//     //         s.push_back(v[rptr]*v[rptr]);
//     //         rptr--;
//     //     }
//     //     else{
//     //         s.push_back(v[lptr]*v[lptr]);
//     //         lptr++;
//     //     }
//     // }
//     // reverse(s.begin(),s.end());
//     // for(int k=0; k<s.size(); k++){
//     //     v[k]=s[k];
//     // }
// }

// void prefix_arr1(vector<int> &v){
//     for(int i = 1; i<v.size(); i++){
//         v[i] = v[i]+ v[i-1];
//     }
// }

// void prefix_suffix_sum_arr(vector<int> &v){

    // // M1 SELF APPROACH
    // int lptr = 0;
    // int rptr = v.size()-1;
    // int lsum = 0;
    // int rsum = 0;
    // while(lptr <= rptr){
    //     //        
    //     if(lsum<rsum){
    //         lsum += v[lptr]; 
    //         lptr++;
    //     }
    //     else if(lsum>rsum){
    //         rsum += v[rptr];
    //         rptr--;
    //     }
    //     else if(lsum == rsum){
    //         lsum += v[lptr];
    //         rsum += v[rptr];
    //         lptr++;
    //         rptr--;
    //     }        
    // }
    // cout<<"lsum =  "<<lsum<<endl<<"rsum =  "<<rsum<<endl;
    // if(lsum==rsum){
    //     cout<<"Breakable at =  "<<lptr<<"  "<<rptr<<endl;
    // }
    // else{
    //     cout<<"Not Breakable"<<endl;
    // }
    
    // // M2 TEACHER
    // //
    // int m =0;
    // int tsum = 0;
    // int prefix_sum = 0;
    // for( int i =0; i<v.size(); i++){
    //     tsum += v[i];
    // }
    // //
    // for ( int j = 0; j<v.size(); j++){
    //     prefix_sum += v[j];
    //     int suffix_sum = tsum - prefix_sum;
    //     if(suffix_sum == prefix_sum){          
    //         m = 1;
    //         break;
    //     }
    // }
    // if(m==1){
    //     cout<<"breakable"<<endl;
    // }
    // else{
    //     cout<<"not breakable"<<endl;
    // }

//}

// void prefix_queries(vector<int> &v){
//     //
//     for(int i = 1; i<v.size(); i++){
//         v[i] = v[i] + v[i-1];
//     }
//     //
//     int q;
//     cout<<"Enter no of Queries :  ";
//     cin>>q;
//     //
//     while(q>0){
//         int l,r;
//         cout<<"Enter l & r :  "<<endl;
//         cin>>l>>r;
//         cout<<"Prefix sum =  "<<(v[l-1]-v[r-1])<<endl;
//         q--;
//     }
// }

int main(){
    
    int n;
    cout<<"Enter n :  ";
    cin>>n; 
    
    vector<int> v;
    
    // input array
    for(int i = 0; i<n; i++){
        int el; cin>>el;
        v.push_back(el);
    }
    
    // FUNCTIONS
    // //
    // // sort(v);
    //
    // // evenodd_sort(v);
    //
    // // sq_sort(v); // ANY ORDER ANY ARRAY
    //
    // // sq_sort2(v); // incresing order array + - inc
    //
    // // PREFIX SUMS ARRAY - 3
    //
    // // prefix_arr1(v);
    //
    // prefix_suffix_sum_arr(v);
    //
    // prefix_queries(v);

    // output array
    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    
    return 0;
}
