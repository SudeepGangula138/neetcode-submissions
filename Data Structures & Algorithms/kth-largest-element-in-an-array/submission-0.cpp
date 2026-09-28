class Solution {
public:
    int partition(vector <int> &nums,int low,int high){
        int pivot=nums[high];
        int i=low;
        for(int j=low;j<high;j++){
            if(nums[j]<=pivot){
                 swap(nums[i],nums[j]);
                 i++;
            }
        }
        swap(nums[i],nums[high]);
        return i;
    }
    int quickselect(vector <int>&nums,int low,int high,int target){
        int p=partition(nums,low,high);
        if(p==target){
            return nums[p];
        }
        if(p>target){
            return quickselect(nums,low,p-1,target);
        }
        return quickselect(nums,p+1,high,target);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int target=n-k;
        return quickselect(nums,0,n-1,target);
    }
};
