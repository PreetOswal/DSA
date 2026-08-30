class Solution {
public:
    string compressedString(string str) {
        string ans="";
        int i=0;
        while(i<str.length()){
            char character = str[i];
            int count = 0;

            while(i<str.length() && str[i] == character){
                count++;
                i++;
            }

            while(count > 9){
                count = count - 9;
                ans.push_back('9');
                ans.push_back(character);
            }

            if(count > 0){
                ans.push_back(count + '0');
                ans.push_back(character);
            }

        }

        return ans;
    }
};