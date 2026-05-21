class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 1; j < accounts[i].size(); j++){
                accounts[i][0] += accounts[i][j];
            }
            if(accounts[i][0] > accounts[0][0]) accounts[0][0] = accounts[i][0];
        }
        return accounts[0][0];
    }
};