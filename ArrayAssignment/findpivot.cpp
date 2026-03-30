#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>&nums ){
    //totalSum
    int totalSum=0;
    for(int i=0;i<nums.size();i++){
        totalSum+=nums[i];

    }
    // rightsum
    int leftSum=0;
    for(int i=0;i<nums.size();i++){
       int rightSum=totalSum-leftSum-nums[i];

       if(leftSum==rightSum){
        return i;
       }
       //else 
       leftSum+=nums[i];
    }


}
int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << "Pivot Index:"<< pivotIndex(nums);

    return 0;
}