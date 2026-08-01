class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        // get the first and the last string
        string first=strs.front();
        string last = strs.back();
        for( int i=0;i <first.length();i++){
            if(first[i]!=last[i]){
                break;
            }
            ans+=first[i];
        }
        return ans;



        
    }
};