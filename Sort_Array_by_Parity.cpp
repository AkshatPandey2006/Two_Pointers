vector<int> sortArrayByParity(vector<int> &nums) {
    int e = 0;
    int o = 0;
    
    while(e < nums.size()) {
        if(nums[e] % 2 == 0 and nums[o] % 2 == 0) {
            e++;
            o++;
        }
        else if(nums[e] % 2 == 0 and nums[o] % 2 != 0) {
            swap(nums[e], nums[o]);
            e++;
            o++;
        }
        else {
            e++;
        }
    }
    return nums;
}
