#include<bits/stdc++.h>
using namespace std;
class Solution{

    public: 
    vector<int> arrange(vector<int>& nums){

        sort(nums.begin(), nums.end());
        return nums;
        
    }
    
};

int main(){
    vector<int> arr = {2, 0, 1, 1, 0, 2};
    vector<int> res;
    Solution sol;
    res = sol.arrange(arr);

    for (int i : res){
        cout<< i << endl;
    }
}
