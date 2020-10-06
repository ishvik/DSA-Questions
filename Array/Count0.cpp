class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int count = 0;
        for(int i=n-1;i>=0;i--){
            if(arr[i] == 0)
                count++;
            else
                break;
        }
        return count;    
    }
};