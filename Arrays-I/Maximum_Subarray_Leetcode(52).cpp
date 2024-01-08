//leetcode :- 53
#define ll long long
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ll sum = 0;
        ll maxi = LONG_MIN;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            if(sum > maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};