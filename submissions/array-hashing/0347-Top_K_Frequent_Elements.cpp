class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int v: nums){
            count[v]++;
        }
        vector<vector<int>> shelves(nums.size() + 1);
        for(auto p: count){
            shelves[p.second].push_back(p.first);
        }
        vector<int> result;
        for(int i = nums.size(); i >= 1; i--){
            for(int v: shelves[i]){
                result.push_back(v);
                if(result.size() == k)
                    return result;
            }
        }
        return result;
    }
};
