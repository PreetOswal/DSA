class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){
            bool didFound = false;
            int j=0;
            while(nums1[i] != nums2[j]){
                j++;
            }

            for(int k =j+1; k<nums2.size(); k++ ){
                if(nums1[i] < nums2[k]){
                    didFound = true;
                    ans.push_back(nums2[k]);
                    break;
                }
            }

            if(!didFound){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};