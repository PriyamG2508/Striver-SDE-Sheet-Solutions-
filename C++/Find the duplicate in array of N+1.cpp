class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int> mpp;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto e:mpp){
            if(e.second > 1) ans = e.first;
        }

        return ans;
    }
};
