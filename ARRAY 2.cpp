#include<iostream>
#include<vector>
using namespace std;

// TWO POINTERS 

//SORT AN ARRAY OF 0s & 1s

void sort(vector<int> &v){

    int no.zero = 0;
    for(int k:v){
        if(v[k]==0){
            no.zero++;
        }
    }
    for(int i=0; i<v.size; i++){
        if( i < no.zero ){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }


}

int main(){
    
    int n;
    cout<<"Enter";
    cin>>n; 
    
    vector<int> v;

    // input array
    for(int i = 0; i<n; i++){
        int el; cin>>el;
        v.push_back(el);
    }

    sort(v);

    // output array
    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;



    return 0;
}
