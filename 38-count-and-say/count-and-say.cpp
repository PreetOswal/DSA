class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n == 1) return s;
        for(int i=1; i<n; i++){
            int j=0, count = 0;
            char curr = s[0];
            string temp = "";
            while(j<s.length()){
                if(curr == s[j]){
                    count++;
                }else{
                    temp.push_back(count + '0');
                    temp.push_back(curr);
                    curr = s[j];
                    count = 1;
                }
                j++;
            }
            if(count!=0){
                temp.push_back(count + '0');
                temp.push_back(curr);
            }

            s=temp;
        }

        return s;
    }
};