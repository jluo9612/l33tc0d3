// Jiabei Luo
// 16ms c++ solution
void moveZeroes(vector<int>& nums) {        
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) nums[count++] = nums[i]; 
        }
        // now count is at the first index after all non-zero items
        while (count < nums.size()) nums[count++] = 0;
        
}
