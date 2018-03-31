// Jiabei Luo
// 80ms c++ solution

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // sort, ascending
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i < nums.size()-1; i+=2) { // nums.size() is even
            res += nums[i];
        }
        return res;
    }
};