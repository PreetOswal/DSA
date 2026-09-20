class Solution {
public:
    int reverseDegree(string s) {
        int ProductSum = 0;

        for(int i=0; i<s.length(); i++){
            int charToInt = s[i] - ('G' + (s[i] - 'a')*2); //G=71 ascii value as A=65 and a=95
            cout<<charToInt;
            int product = (charToInt * (i+1));
            ProductSum = ProductSum + product;
        }

        return ProductSum;
    }
};