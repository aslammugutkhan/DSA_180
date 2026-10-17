#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> dutch(vector<int>& nums){
        
        int n = nums.size();
        int low = 0;
        int mid =0;
        int high = n-1;

        while(high<=mid){

            if(nums[mid] == 0){
                swap(low,mid);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(mid,high);
            }
        }
        return nums;


    }

};

int main(){

    vector<int> arr = {0,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,2};
    Solution sol;
    vector<int> res = sol.dutch(arr);
    for(int i : res){
        cout<< i << endl;
    }

}