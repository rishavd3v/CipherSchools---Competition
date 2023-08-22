#include<iostream>
#include<algorithm> 
using namespace std;

int main(){

    int arr[] = {1,8,6,2,5,4,8,3,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    int area = 0;

    for(int i=0;i<len;i++){
        for (int j = i+1; j<len; j++){
            int height = min(arr[i],arr[j]);
            area = (j-i)*height;
            if(max<=area){
                max = area;
            }
        }
    } 
    cout<<max;
    return 0;
}