// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size(), z = -1;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == 0) {
//                 z = i;
//             }
//             if (z != -1)
//                 break;
//         }
//         cout<<z<<endl;
//         if (z == -1)
//             return;

//         for (int i = 0; i < n; i++) {
//             if (nums[i] != 0 && z<i) {
//                 cout << i << endl;
//                 swap(nums[z], nums[i]);

//                 z++;
//             }
//         }
//     }
// };