#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> arrange(vector<int>& nums){

        int sz = nums.size();
        int count0=0;
        int count1=0;
        int count2=0;

        for(int i = 0 ; i< sz; i++){
            if(nums[i] == 0){
                count0++;
            }
            else if(nums[i] == 1){
                count1++;
            }
            else if(nums[i]==2){
                count2++;
            }
        }

        for(int i =0; i<count0;i++){

            nums[i] = 0;
        }
        for(int i =count0; i<count0 + count1;i++){

            nums[i] = 1;
        }
        for(int i =count1+count0; i<count0 + count1+count2;i++){

            nums[i] = 2;
        }
        return nums;
    }

};

int main(){

    vector<int> arr = {0, 2, 1, 2, 0, 1};
    Solution sol;

    vector<int> res = sol.arrange(arr);
    for(int i : res){
        cout<< i << endl;
    }
}