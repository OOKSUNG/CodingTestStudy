class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        int* dp = new int[nums.size()];
        dp[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if (dp[i - 1] != 0)
                dp[i] = max(dp[i - 1] - 1, nums[i]);
            else 
                dp[i] = 0;        
        }
        if (dp[nums.size() - 2] != 0) return true;
        else return false;
    }
};


// dp[n] : n 번째 인덱스에 도달할 때 최대의 가솔린
// dp[n] = max(dp[n - 1] - 1, arr[n])