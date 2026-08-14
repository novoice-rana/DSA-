class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        int ans=0;
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int i=0;
        int j=0;
        int count =0;
        int n= start.size();
        while (i < n) {

            if (start[i] < end[j]) {
                // New meeting starts before an old meeting ends
                count++;
                ans = max(ans, count);
                i++;
            }
            else {
                // A meeting has ended, so free a room
                count--;
                j++;
            }
        }
        
        return ans;
        
        
        
    }
};
