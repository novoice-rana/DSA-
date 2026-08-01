class Solution {
public:
    bool isVowel(char c){
        c=tolower(c);
         return c == 'a' || c == 'e' || c == 'i' 
           || c == 'o' || c == 'u';
        }
    string reverseVowels(string s) {
        //  using two pointer 
        int left =0; int right =s.length()-1;
        while(left<right){
            if(left<right && !isVowel(s[left])){
                left++;
            }
            else if(left<right && !isVowel(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;

        

        
    }
};