class Solution {
public:
    void recursiveRev(vector<char>& s,int i){
        int n =s.size();
        if(i>=n/2){
            return;
        }
        int temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
        recursiveRev(s,i+1);
    }
    void reverseString(vector<char>& s) {
        recursiveRev(s,0);
    }
};