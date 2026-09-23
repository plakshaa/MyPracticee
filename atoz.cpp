// class Solution {
// public:
//     void rotateArray(vector<int>& nums, int k) {
//         for (int a =0; a<k;a++){
//             int n = nums[0];
//             int s = nums.size();
//             for (int i = 0; i<= s - 1; i++){
//                 nums[i] = nums[i+1];
//                 if(i == s-1){
//                     nums[i] = n;
//                 }
//             }
//             cout<<&nums<<endl;
//         }}
//
// };