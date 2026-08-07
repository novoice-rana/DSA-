class Solution {
public:
bool isAnagram(string &a ,string &b){
      if(a.size()!= b.size())
      {
          return false;
      }
     string s1 = a;
    string s2 = b;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;
      
      
  }
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector <string>> res;
        int n = arr.size();
        vector<bool> visited(n, false);
        for( int i =0;i<n;i++){
            if(visited[i]){
                continue;
            }
            vector<string> group;
            group.push_back(arr[i]);
            visited[i]=true;
            for (int j = i + 1; j < n; j++) {
            if (!visited[j] && isAnagram(arr[i], arr[j])) {
                group.push_back(arr[j]);
                visited[j] = true;
            }
        }

        res.push_back(group);
    }

    return res;
        
    }
};