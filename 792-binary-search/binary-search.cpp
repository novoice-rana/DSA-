class Solution {
public:
    int binSearch(vector<int>& nums,int s,int e, int target){
        
       
        //base case
        if(s>e){
            return -1;

        }
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if (nums[mid]<target){
            return binSearch(nums,mid+1,e,target);

        }
        else{
            return binSearch(nums,s,mid-1,target);
        }
    }
    int search(vector<int>& nums, int target) {
       return binSearch(nums,0,nums.size() - 1,target);
    }
};