class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int> curr;
        std::vector<bool> visited(nums.size(), false);

        backtrack(res, curr, visited, nums);
        return res;
    }

    void backtrack(std::vector<std::vector<int>>& res, 
                   std::vector<int>& curr, 
                   std::vector<bool>& visited, 
                   const std::vector<int>& nums) {
        
        if (curr.size() == nums.size()) {
            res.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (visited[i]) continue;

            visited[i] = true;
            curr.push_back(nums[i]);

            backtrack(res, curr, visited, nums);

            curr.pop_back();
            visited[i] = false;
        }
    }
};

// 1         2          3
// 2    3    3    1     1    2
// 3    2    1    3     2    1

