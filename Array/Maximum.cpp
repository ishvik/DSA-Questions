class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int i=0;
	    int j = 0;
	    while(i<n-1){
	        if(arr[i]<arr[i+1]){
	            i++;
	            j++;
	        }
	        else
	            break;
	    }
	    if(j<n-1)
	        return arr[i];
	    else
	        return arr[n-1];
    	
	}
};