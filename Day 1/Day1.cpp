#include<iostream>
#include<algorithm> 
using namespace std;

int main(){

    int arr[] = {1,8,6,2,5,4,8,3,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max_area = 0;

    for(int i=0;i<len;i++){
        for (int j = i+1; j<len; j++){
            int height = min(arr[i],arr[j]);
            int area = (j-i)*height;
            if(max_area<=area){
                max_area = area;
            }
        }
    } 
    cout<<max_area;
    return 0;
}