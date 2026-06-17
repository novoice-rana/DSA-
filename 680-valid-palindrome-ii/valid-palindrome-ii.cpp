class Solution {
public:
    bool checkPallindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }else{
                i++;
                j--;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                //s[i]!=s[j]
                //1 removal allowed
                // check pallindrome for remain after removal

                // ith character -> remove
                bool ans1=checkPallindrome(s,i+1,j);
                //jth character -> remove
                bool ans2= checkPallindrome(s,i,j-1);
                return ans1|| ans2;


            }
        }
        // agar yha tak pohoch gyi matlb pallindrome hai zero removal
        return true;

        
    }
};