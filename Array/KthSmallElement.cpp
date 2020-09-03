#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;
    }
    
    return 0;
}