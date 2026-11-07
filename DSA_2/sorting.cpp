#include<iostream>
using namespace std;
#include<vector>

vector<int> bubble_sort(vector<int> v){
    vector<int> v1 = v;
    for(int i=0; i<v1.size()-1; i++){
        bool flag = false;
        for(int j=0; j<v1.size()-1-i; j++){
            if(v1[j]>v1[j+1]){
                flag = true;
                swap(v1[j], v1[j+1]);
            }
        }
        if(flag == false){
            break;
        }
    }
    return v1;
}

vector<int> selection_sort(vector<int>v){
    vector<int> v2 = v;
    for(int i=0; i<v2.size()-1; i++){
        int min = i;
        for(int j=i+1; j<v2.size(); j++){
            if(v2[j] < v2[min]){
                min = j;
            }
        }
        if(min != i){
            swap(v2[i], v2[min]);
        }
    }
    return v2;
};

vector<int> insertion_sort(vector<int> v){
    vector<int> v3 = v;
    for(int i = 1; i<v3.size(); i++){
        if(v3[i]<v3[i-1]){
            for(int k = i; k>0; k--){
                if(v3[k-1]<v3[k]){
                    break;
                }
                int t = v3[k];
                v3[k]=v3[k-1];
                v3[k-1]=t;
            }
        }
    }
    return v3;
}

vector<int> zeroback( vector<int> vq){
    for(int i=vq.size()-1; i>=0; i--){
        if(vq[i]==0){
            int k=i;
            for(int j=i+1; j<vq.size() && k<vq.size(); j++, k++){
                int t = vq[k];
                vq[k] = vq[j];
                vq[j] = t;
            }
        }
    }
    return vq;
}

// int minidx(vector<int> v, int id){
    
//     for(int i=id; i<v.size(); i++){

//     }
// }

vector<string> mango(vector<string> v){
    // int id = 1;
    // for(int j = 0; j<v.size(); j++){
    //     string min = (v[j]);
    //     for(int i=j; i<v.size(); i++){
    //         // int idx = minidx(v, id);
    //         if((v[i])< min){
    //             min = (v[i]);
    //             id = i;
    //         }
    //     }
    //     string t = v[j];
    //     v[j] = v[id];
    //     v[id] = t;
    // }
    // return v;

    vector<string> v1 = v;

    for(int i =0; i<v1.size()-1; i++){
        // string m = v1[i];
        int mn = i;
        for(int j = i+1; j<v1.size(); j++){
            if(v1[mn][0]> v1[j][0]){
                mn = j;
            }
            else if(v1[mn][0] == v1[j][0]){
                int k =1;
                while(k<v1[mn].size() && k< v1[j].size()){
                    if(v1[mn][k] > v1[j][0]){
                        mn = j;
                        break;
                    }
                    else if(v1[mn][k] < v1[j][0]){
                        break;
                    }
                }
            }        
        }
        //swap
        if( mn != i){
           swap( v1[mn], v1[i]); 
        }; 
    };

    return v1;
}



int main(){


    vector<int> v = {10,40,40,10,30,50,20};

    // vector<int> v1 = bubble_sort(v);
    // // for(int i=0; i<v1.size(); i++){
    // //     cout<<v1[i]<<"  ";
    // // }
    // for(int el : v1 ){
    //     cout<<el<<"  ";
    // }
    // cout<<endl;

    // vector<int> v2 = selection_sort(v);
    // for(int el : v2 ){
    //     cout<<el<<"  ";
    // }

    // vector<int> v3 = insertion_sort(v);
    // for(int el : v3 ){
    //     cout<<el<<"  ";
    // }


    //ques /////////////////////////

    //zeroes to end
    // vector<int> vq1 = {0,5,0,3,4,2};
    // vector<int> vs1 = zeroback(vq1);
    // for(int el : vs1 ){
    //     cout<<el<<"  ";
    // }

    vector<string> vq2 = {"papaya", "lime", "watermelon", "apple", "mango", "mengo", "kiwi"};
    vector<string> vs2 = mango(vq2);
    for(string el : vs2 ){
        cout<<el<<"  ";
    }




 
    return 0;
}