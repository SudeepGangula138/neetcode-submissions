class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output(nums.size());
        for(int i=0;i<nums.size();i++){
            int m=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                  m*=nums[j];
                }
                else{
                    continue;
                }
            }
            output[i]=m;
        }
        return output;



    }
};
