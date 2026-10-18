#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    vector<vector<int>> addd(vector<int>& nums){
        set<vector<int>> ss;
        int sz = nums.size();

        for(int i =0;i<sz-2;i++){
            for(int j = i+1;j<sz-1;j++){
                for(int k =j+1;k<sz;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        ss.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(ss.begin(),ss.end());
        return ans;
    }
};


int main(){

    vector<int> arr = {-4,	-1,	-1,	0,	1,	2,	2,	-2};
    Solution sol;
    vector<vector<int>> res = sol.addd(arr);

    for(auto& tri : res){
        for(auto& nums: tri){
            cout<< nums << endl;
        }
    }

}
