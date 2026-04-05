class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        int j = n-1;
        int m=0;
        while(m<=j){
            if(arr[m]==0){
                swap(arr[i],arr[m]);
                m++;
                i++;
            }
            else if(arr[m]==1){
                m++;
            }
            else {
               swap(arr[m],arr[j]);
               j--;

            }


        }

       
        
        
    }
};