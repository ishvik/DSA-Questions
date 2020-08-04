class Solution {
public:

    float po(int n,int r)
    {
        return log(n)/log(r);
    }

    bool isPowerOfFour(int num) {
        if(num == 0)
            return false;
        if(ceil(po(num,4)) == floor(po(num,4)))
            return true;
        return false;
    }
};
