class Solution {
public:

    bool isValidMinDays(vector<int>&bloomDay, int m, int k, int day){
        int bouquet = 0,  alloted = 0;
        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] <= day){
                alloted++;

                if(alloted == k){
                    bouquet ++;
                    alloted =0;
                }
            }else{
                alloted = 0;
            }
        }

        if(bouquet >= m) return true;

        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;
        int st = INT_MAX, end = INT_MIN;
        for(int i=0; i<bloomDay.size(); i++){
            st = min(st, bloomDay[i]);
            end = max(end, bloomDay[i]);
        }

        int ans = -1;
        while(st <= end){
            int mid = st + (end - st) /2;

            if(isValidMinDays(bloomDay, m, k, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }

        return ans;
    }
};