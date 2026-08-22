class Solution {
public:
    string getPermutation(int n, int k) {
        string num = "";
        for(int i=1; i<=n; i++){
            num = num + to_string(i);
        }

        for(int i=1; i<k; i++){
            next_permutation(num.begin(), num.end());
        }

        return num;
    }
};