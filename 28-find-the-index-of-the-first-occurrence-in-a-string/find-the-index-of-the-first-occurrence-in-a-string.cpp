class Solution {
public:
    int strStr(string haystack, string needle) {
        int left = 0 ;
        int right = 0;
        while(right < haystack.length()){

            if((right - left + 1) == needle.length()){
                if(haystack.substr(left , right-left+1) == needle){
                    return left;
                }
                left++;
            }
            right++;
        }

        return -1;
    }
};