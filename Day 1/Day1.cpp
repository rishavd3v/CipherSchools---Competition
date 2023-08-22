#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_area = 0;

    for(int i=0;i<n;i++){
        for (int j = i+1; j<n; j++){
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