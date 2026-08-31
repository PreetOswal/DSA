class Solution {
public:

    bool isValidWeight(vector<int>&weights, int days, int allowedWeight){
        int init = 1, currWeight = 0;
        
        for(int i= 0; i<weights.size(); i++){
            if(weights[i] > allowedWeight) return false;

            if(weights[i] + currWeight <= allowedWeight){
                
                currWeight = currWeight + weights[i];
            }else{
                init++;
                currWeight = weights[i];
            }

        }

        if(init <= days) return true;

        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int st = 1, end = 0;
        for(int i=0; i<weights.size(); i++){
            end = end + weights[i];
        }
        int ans = 0;

        while(st <= end){
            int mid = st + (end - st)/2;

            if(isValidWeight(weights, days, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }

        }

        return ans;
    }
};