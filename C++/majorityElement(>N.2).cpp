class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Using moore voting algorithm
        int majorityElement = 0;
        int votes = 0;

        for(int i=0; i<nums.size(); i++){
            if(votes == 0){
                majorityElement = nums[i];
            }

            if(majorityElement == nums[i]){
                votes++;
            }

            if(majorityElement != nums[i]){
                votes--;
            }
        }
        return majorityElement;
    }
};
