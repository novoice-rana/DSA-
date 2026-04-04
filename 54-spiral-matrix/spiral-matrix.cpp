class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();// rows
        int n=matrix[0].size();//columns
        int dir =0;
        /*
        dir =0: left to right
        dir =1: top to down
        dir =2 : right to left
        dir=3: down to top */
             vector<int> result;
             int left=0;
             int right =n-1;
             int top=0;
             int down =m-1;
             while(result.size()<(m*n)){
                if(dir ==0){
                    //left to right 
                    // const =row(top)
                    for(int i=left;i<=right;i++){
                        result.push_back(matrix[top][i]);
                    }
                    top++;
                }
                if(dir ==1){
                    //top to down
                    // const :right
                    for(int i=top;i<=down;i++){
                        result.push_back(matrix[i][right]);
                    }  
                    right--;
                }
                if(dir==2){
                    //right to left
                    // const : row down
                    for(int i=right;i>=left;i--){
                        result.push_back(matrix[down][i]);

                    }
                    down--;
                }
                if(dir==3){
                    //down to top
                    // const :col(left)
                    for( int i=down;i>=top;i--){
                        result.push_back(matrix[i][left]);
                    }
                    left++;
                }
                dir++;
                if(dir==4){
                    dir=0;
                }


             }
             return result;
    }
};