
// First iteration without help

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool isFound = false;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    isFound = true;
                    return isFound;
                }
            }
        }
        return isFound;
    }
};

// Second attempt

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); i++){
            if(1 == seen.count(nums[i])){
                return true;
            }
            else{
                seen.insert(nums[i]);
            }
        }
        return false;
    }
};