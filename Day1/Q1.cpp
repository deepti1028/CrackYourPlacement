// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int count = 0, ele = -1;
//         for (int i = 0; i < nums.size(); i++) {
//             if (count == 0) {
//                 count++;
//                 ele = nums[i];
//             } else {
//                 if (nums[i] != ele)
//                     count--;
//                 else {
//                     count++;
//                 }
//             }
//         }
//         return ele;
//     }
// };