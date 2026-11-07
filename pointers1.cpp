#include<iostream>
using namespace std;
#include<string>

// void swap(int *a, int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }

// void fandl(string str, char a ,int *f,int *l){
//     for(int i =0; i<str.size(); i++){
//         if (str[i] == a){
//             *f = i;
//             break;
//         }
//     }
//     for(int i=str.size() -1; i>=0; i--){
//         if (str[i] == a){
//             *l = i;
//             break;
//         }
//     }
// } 

// void test(int n, int *ptr){
//     for(int i = 0; i<n; i++){
//         cout<<ptr+i<<"      "<<*(ptr+i)<<endl;
//     }
// }

int main(){

    // //now intro
    // int x = 90;
    // int y = 91;
    // //
    // int *ptr;
    // ptr = &x;
    // //
    // int *ptr2 = &y;
    // //
    // //
    // float f = 2345.40;
    // float *fptr = &f;
    // //
    // cout<<ptr<<"    "<<ptr2<<"    "<<fptr<<"    "<<*fptr<<endl;
    // *ptr print means value stored i.e de-referencing.
    //
    // int x = 10;
    // int *pt1 = &x;
    // int **pt2 = &pt1;

    // int a =10;
    // int b= 20;
    // //CALL BY REF BY POINTERS
    // int *apt = &a;
    // int *bpt = &b;
    // cout<<*apt<<"    "<<*bpt<<"    "<<a<<"    "<<b<<endl;
    // swap(apt,bpt);
    // cout<<*apt<<"    "<<*bpt<<"    "<<a<<"    "<<b<<endl;

    //TO FIND THE FIRST AND LAST INDEXING OF A CHAR IN A STRING
    
    // string str = "aaacad";
    // char a = 'a';
    // int f = -1;
    // int l = -1;
    // fandl( str, a, &f, &l); 
    // cout<<f<<"     "<<l<<endl;

    //POINTER ARITHMATIC    
    //POINTER + 1 = ADDRESS OF VAR + SIZE OF VAR = ANOTHER ADDRESS

     // IMP
    // int arr[5] = {5,60,47,18,999};
    // int *ptr = &arr[0];
    
    // test(sizeof(arr)/sizeof(arr[0]), ptr);

    // cout<<arr<<"    "<<ptr<<"\n";




    return 0;
}