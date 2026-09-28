class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;
        for (int x : nums) {
            count[x]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto x : count) {
            bucket[x.second].push_back(x.first);
        }
        vector<int> ans;
        for (int freq =nums.size(); freq >= 1; freq--) {
            for (int x : bucket[freq]) {
                ans.push_back(x);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        return ans;
    }
};
