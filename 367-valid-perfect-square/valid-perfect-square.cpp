class Solution {
public:
bool isSqrt(int num){
    int s=0;
        int e=num;
        long long int m=s+(e-s)/2;
        while(s<=e){
            if( m*m==num){
                return true;
            }
            else if(m*m<num){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        return false;
}
    bool isPerfectSquare(int num) {
        if(isSqrt(num)){
            return true;

        }else{
            return false;
        }
        
        
    }
};