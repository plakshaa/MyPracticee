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

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()){
            k = k % nums.size();
        }
        vector<int> num;
        int s = nums.size();
        for(int i = s - k; i<= s-1; i++){
            num.push_back(nums[i]);
        }
        for( int j = 0; j<= s - k -1; j++){
            num.push_back(nums[j]);
        }
        nums = num;
        //     for (int a =0; a<k;a++){
        //     int s = nums.size();
        //     int n = nums[s-1];
        //     for (int i = s-1; i>0; i--){
        //         nums[i] = nums[i-1];
        //         if(i == 1){
        //             nums[0] = n;
        //         }
        //     }
        //     cout<<&nums<<endl;
        // }
        // }
    }
};