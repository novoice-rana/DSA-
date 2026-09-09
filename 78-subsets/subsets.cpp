class Solution { 
public: 
    void func(int ind, vector<int>& nums, vector<vector<int>>& subset, vector<int>& ds) { 
        int N = nums.size(); 
        
        if(ind == N){ 
            subset.push_back(ds); 
            return; 
        } 
        
        ds.push_back(nums[ind]);
        func(ind + 1, nums, subset, ds);
        ds.pop_back();
        
        func(ind + 1, nums, subset, ds);
    } 
    
    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<vector<int>> subset;
        vector<int> ds;
        
        func(0, nums, subset, ds);
        
        return subset;
    } 
};