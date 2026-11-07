//rough
#include <iostream>
using namespace std;
#include <vector>

vector<int> twoSum(vector<int>& nums, int target) {
        int size = sizeof(nums)/sizeof(nums[0]);
        vector<int> sol;
        for(int i = 0; i<size-1; i++){
            for(int j = i+1; j<size; j++){
                if(nums[i] + nums[j] == target){
                    sol.push_back(i);
                    sol.push_back(j);
                    return sol;
                }
            }
        }
        return sol;
    }

int main(){

    vector<int> nums = {0,7,11,15};
    int target = 9;
    
    vector<int> sol = twoSum(nums, target);

    for(int k = 0; k<(sizeof(sol)/sizeof(sol[0])); k++){
        cout<<sol[k]<<"\n";
    }

    return 0;
}