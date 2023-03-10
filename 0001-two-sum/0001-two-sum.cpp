class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int flag = 0, i = 0;
        while ( i < nums.size() && flag == 0){
            for (int j = 1; j < nums.size(); j++){
                if (i != j && nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    flag  = 1;
                }
            }
            i++;
        }   
        return res;
    }
};