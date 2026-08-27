class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 =0;
        int ele1 = INT_MIN, ele2 =  INT_MIN;
        for(int i =0; i<nums.size(); i++){
            if(count1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                count1 = 1;
            }else if(count2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                count2 = 1;
            }else if(ele1 == nums[i]) count1++;
            else if(ele2 == nums[i]) count2++;
            else{
                count1--,count2--;
            }
        }

        count1=0;
        count2=0;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(ele1 == nums[i]){
                count1++;
            }else if(ele2 == nums[i]){
                count2++;
            }
        }

        if(count1 > (nums.size()/3)) ans.push_back(ele1);
        if(count2 > (nums.size()/3)) ans.push_back(ele2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};