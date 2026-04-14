class Solution {
public:
    void rotate(vector<vector<int>>&matrix){
        int n=matrix.size();
        // transpose 

        
        for( int i=0;i<n;i++){
            for( int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
        };
        // reverse row 
        for( int i=0;i<n;i++){
            int start =0; int end=n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;end--;

            }
            
        };

    };
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        
        for( int i=0;i<4;i++){
            rotate(matrix);
            if(matrix==target){
            return true;
            
        }
       
        };

         return false;
        
        

   
    }

        

        
        
    
};