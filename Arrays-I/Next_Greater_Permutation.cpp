class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //first :- find a break point
        int index = -1;
        int size = nums.size();
        for(int i = size-2; i >= 0; i--) {
            if(nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return; 
        }
        // second :- swap the nearest bigger value
        for(int i = size-1; i > index; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        // third :- reverse the rest of these
        reverse(nums.begin() + index + 1, nums.end());
    }
};
