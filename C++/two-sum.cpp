// Time:  O(n)
// Space: O(n)

class Solution {
public:
    vector<int> twoSum(const vector<int> & nums, int target) {
        unordered_map<int, int> lookup;
        for (int i = 0; i < nums.size(); ++i) {
            if (lookup.count(target - nums[i])) {
                return {lookup[target - nums[i]], i};
            }
            lookup[nums[i]] = i;
        }
        return {};
    }
    pair<int, int> twoSum2(const vector<int> & nums, int target) {
        unordered_map<int, int> lookup;
        for (int i = 0; i < nums.size(); ++i) {
            if (lookup.count(target - nums[i])) {
                return { lookup[target - nums[i]], i };
            } else {
                lookup[nums[i]] = i;
            }
        }
        return {};
    }
};
