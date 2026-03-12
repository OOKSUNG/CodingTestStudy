class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_map<int, int> map;
        int n = arr.size();
        int ans = 0;
        vector<vector<int>> dp(n,vector<int>(n,2));
        for(int i = 0; i < n; i++){
            map[arr[i]] = i;
        }
        for(int j = 0; j < n; j++){
            for(int k = 0; k < j; k++){
                int prev = arr[j] - arr[k];
                if(map.count(prev)){
                    int i = map[prev];
                    if(i < k){
                        dp[k][j] = dp[i][k] + 1;
                        ans = max(ans, dp[k][j]);
                    }
                }
            }
        }
        return ans >= 3 ? ans : 0;
    }
};