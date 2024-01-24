// using hashMasp 
//better solution
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
          map<int,int>mpp;
          for(int i =0; i<nums.size();i++){
              mpp[nums[i]]++;
          }
          for(auto j: mpp){
              if(j.second > (nums.size()/2)){
                  return j.first;
              }
          }
          return -1;
    }
};


//bruteForce
// #include <vector>

// class Solution {
// public:
//     int majorityElement(std::vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int count = 0;  
//             for (int j = 0; j < n; j++) {
//                 if (nums[i] == nums[j]) {
//                     count++;
//                 }
//             }
//             if (count > n / 2) {
//                 return nums[i];
//             }
//         }
//         return -1;   
//     }
// };