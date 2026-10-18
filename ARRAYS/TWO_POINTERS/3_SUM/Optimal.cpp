#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> addd(vector<int>& nums){

        vector<vector<int>> ans;
        int sz = nums.size();
        sort(nums.begin(), nums.end());

        for(int i =0; i<sz-2;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j  = i+1;
            int k = sz-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0){
                    k--;
                }else if(sum < 0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i], nums[j] ,nums[k] } ;
                    ans.push_back(temp);
                    j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
                }

                

            }
        }

        return ans;

    }
};


int main(){

    vector<int> arr = {0,0,0};

    Solution sol;
    vector<vector<int>> res = sol.addd(arr);

    for(auto& tri : res){
        for(auto& nums : tri){
            cout<< nums <<endl;
        }
    }
}