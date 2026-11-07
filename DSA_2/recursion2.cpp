#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> 
#include<cstdlib>

vector<int> sol;

//FROG JUMP PROBLEM
// 10 30 40 20 50 30 60 10 40 20 
// 
int cost(vector<int> v,int idx){
    if(idx == v.size()-2 || idx == v.size()-3){
        return abs(v[v.size()-1]- v[idx]);
    }
    int cost1= abs(v[idx+1] - v[idx]) + cost(v, idx+1);
    int cost2= abs(v[idx+2] - v[idx]) + cost(v, idx+2);
    int costing = min(cost1 , cost2);

    return costing;
};

bool check(vector<int> v,int idx, int x){
    if(idx < v.size()){
        if(v[idx] == x){
            return true;
        }
        else{
            return ( false || check(v, idx+1, x));
        }
    }
    return false;
}

void subset_sum(vector<int> v,int idx, int sum){
    // // pick and not pick
    // vector<int> n;
    // n = subset_sum(v, idx+1, sum);
    // if(idx == v.size()-1){
    //     return {0, v[idx]};
    // }
    // //pick 
    // for(int i=idx+1; i<n.size(); i++){
    //     n[i] = n[idx] + n[i];
    // }
    // //not pick
    // n.insert(n.end(), v.begin(), v.end());
    // cout<<"this"<<endl;

    // return n;
    // if(idx == v.size()){
    //     return {0};
    // }
    
    // for(int i = idx+1; i<v.size(); i++){
    //     sol.push_back(v[idx] + v[i]);
    //     sol.push_back(v[i]);
    // }
    // sol.push_back(v[idx]);
    // return subset_sum(v, idx+1, sum);

    if(idx == v.size()){
        sol.push_back(sum);
        return;
    }
    subset_sum(v, idx+1, sum+v[idx]);
    subset_sum(v, idx+1, sum);
}


int g = 0;

void path( int m, int n, int i, int j, int p){
    if(j == n-1 && i == m-1){
        return ;
    }
    
    //turn right
    if(j < n-1){
        //turn right;
        path( m, n, i, j+1, p);
    }

    //turn down 
    if(i < m-1){
        //turn right;
        path( m, n, i+1, j, p);
    }
    if(j < n && i< m){
        //turn right;
        p+=1;
        g++;
        
    }
    
    

}

int path2( int m, int n){       //correct
    if(m ==1 || n == 1){
        return 1;
    }
    //choice
    if(m>1 && n>1){
        g++;
    }
    return (path2(m-1, n) + path2(m, n-1));
}


// vector<string> s;

vector<string> subsequence(string str, int idx){
    //base case
    if(idx == str.size()){
        return {""};
    }
    vector<string> s = subsequence(str, idx+1);
    vector<string> s2;
    //not take
    for(int i=0; i<s.size(); i++){
        s2.push_back(s[i]);
    }
    //take
    for(int i=0; i<s.size(); i++){
        s2.push_back(str[idx]+s[i]);
    }
    s = s2;
    return s;
}

void keypad(string nums, vector<string> &arr, int idx )









int main(){

    vector<int> v = {2,4,5};

    // cout<<cost(v, 0);
    // cout<<check(v, 0, 41);
    
    // subset_sum(v, 0, 0);
    // sort(sol.begin(), sol.end());
    // for(int i=0; i<sol.size(); i++){
    //     cout<<sol[i]<<" ";
    // }
    int z = 0;
    int *y = &z;
    
    // path(2,3,0,0,z);

    // cout<<path2(4,4)<<endl;

    string str = "abc";
    vector<string> s4;
    vector<string> s7;
    s4 = subsequence(str, 0);
    for(int i=0; i<s4.size(); i++){
        cout<<s4[i]<<" ";
    }
    
    // cout<<g<<endl;
    cout<<"ok";

    return 0;

}