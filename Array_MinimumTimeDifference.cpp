class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> time(n,0);
        for(int i = 0; i < n;i++){
            string h = timePoints[i].substr(0,2);
            string m = timePoints[i].substr(3,2);
            time[i] = stoi(h)*60+stoi(m);
        }
        sort(time.begin(),time.end());
        int mini = INT_MAX;
        for(int i = 1; i < n;i++){
            int diff = time[i]-time[i-1];
            mini = min(mini,diff);
        }
       
        mini = min(mini,(time[0]+24*60)-time[n-1]);
        return mini;
    }
};
