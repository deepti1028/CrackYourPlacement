// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int ch=0,i=0;
//         int n=nums.size();
//         while(i<n){
//             while(i<n-1 && nums[i]==nums[i+1]){
//                 i++;
//             }
//             // if(i<n)
//             swap(nums[ch],nums[i]);
//             ch++;
//             i++;
//         }
//         return ch;
//     }
// };