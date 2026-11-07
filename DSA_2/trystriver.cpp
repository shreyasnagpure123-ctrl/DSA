#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>

int seclargest(vector<int> v){

    // //sort and sec last;
    // sort(v.begin(), v.end());
    // for(int i=v.size()-1; i>0; i--){
    //     if(v[i-1]<v[i]){
    //         return v[i-1];
    //     }
    // }
    // return -1;

    //diff appr
    int mx1 = v[0];
    int mx2 = v[1];
    int idx = 2;
    while(mx2 == mx1){
        if(idx>=v.size()){
            return -1;
        }
        mx2 = v[idx];
        idx++;
    }
    
    for(int i= idx; i<v.size(); i++){
        if(v[i]>mx1){
            mx2 = mx1;
            mx1 = v[i];
        }
        else if(v[i]>mx2){
            mx2 = v[i];
        }
    }
    return mx2;
}



int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if(nums.size()<3){
        return nums[0];
    }
    for(int i=0; i<nums.size(); i++){
        int c = 0;
        int m = nums[i];
        while(nums[i] == m && i<nums.size()){
            c = c+1;
            i++;
        }
        if(nums[nums.size()-1] == m){
            c++;
        }
        if(c > (nums.size()/2)){
            return m;
        }
        i--;
    }
    return 0;
}


vector<int> leaders(vector<int>& nums) {
    vector<int> sol;
    sol.push_back(nums[nums.size()-1]);
    int t= (nums[nums.size()-1]);
    for(int i = nums.size()-2; i>=0; i--){
        if(nums[i]>t){
            t = nums[i];
            sol.push_back(t);
        }
    }
    reverse(sol.begin(), sol.end());
    return sol;
}




int main(){
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(7);
    s.insert(4);
    s.insert(9);
    s.insert(2);//add to the front
    // cout<<s.count(10)<<endl;
    auto i = s.find(7);

    int idx = distance(s.begin(), i);
    // cout<<idx<<endl;


    // cout<<seclargest({8, 8, 7, 6, 5});
    // cout<<seclargest({10, 10, 10, 10, 10});

    // vector<int> nums1 = {-1,1,1,1,2,1};
    // cout<<majorityElement(nums1);

    vector<int> num = {1, 2, 5, 3, 1, 2};
    vector<int> lead = leaders(num);

    for(int el : lead){
        cout<<el<<"  ";
    }


    return 0;
}