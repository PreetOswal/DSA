class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int whites = 0;
        int l=0, r=0;
        while(r<k){
            if(blocks[r] == 'W'){
                whites++;
            }
            r++;
        }
        int minToColor = whites;
        while(r<blocks.size()){
            if(blocks[r] == 'W'){
                whites++;
            }
            if(blocks[l] == 'W'){
                whites--;
            }
            minToColor = min(minToColor, whites);
            r++,l++;
        }

        return minToColor;
    }
};