class Solution {
public:

    static bool myGreater(const int &a,const int &b){
        return a>b;
    }

    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        int i=0;

        while(i<nums.size()){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
            i++;
        }

        sort(even.begin(),even.end());
        sort(odd.begin(), odd.end(), myGreater);
        int evenIdx =0;
        int oddIdx = 0;

        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                nums[i] = even[evenIdx];
                evenIdx++;
            }else{
                nums[i] = odd[oddIdx];
                oddIdx++;
            }
        }

        return nums;
    }
};