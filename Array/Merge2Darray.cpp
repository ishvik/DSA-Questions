#include<iostream>
using namespace std;

int main(){

    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int arr[9];
    int count = 0;
    int i = 0;
    while(i<3){
        for(int j=0;j<3;j++){
            arr[count] = m[i][j];
            count++;
        }
        i++;
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}