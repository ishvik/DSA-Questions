class Solution {
public:
    bool detectCapitalUse(string word) {
        int x = word.size();
        int count = 0;
        if(x == 0)
            return true;
        for(int i=0;i<x;i++)
        {
            if(word[i]>=65 && word[i]<=90)
                count++;
        }
        if(count == x) //All chars are capital
            return true;
        if(count == 1 && word[0]>=65 && word[0]<=90) //1st char is capital and rest are small
            return true;
        if(count == 0) //All chars are small
            return true;
        return false;
    }
};
