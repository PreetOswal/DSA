class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size(), 0);
        stack<int>idx;
        int i = 1;
        idx.push(0);
        while(i<temp.size()){
            while(!idx.empty() && temp[i] > temp[idx.top()]){
                ans[idx.top()] = i - idx.top();
                idx.pop();
            }
            idx.push(i);
            i++;
        }
        
        while(!idx.empty()){
            ans[idx.top()] = 0;
            idx.pop();
        }
        return ans;
    }
};