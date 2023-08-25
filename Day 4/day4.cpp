#include <bits/stdc++.h>
using namespace std;

int kthSum(vector<int>& v, int n, int k) {
    int sub[1 << n];

    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=count-1;j>=0;j--){
            sub[count]=sub[j]+v[i];
            count++;
        }
        sub[count]=v[i];
        count++;
    }
    sort(sub, sub + count, greater<int>());
    return sub[k - 1]; 
}

int main() {
    vector<int> vec;
    int n,k,x;
    cout<<"Enter size of Array: ";
    cin >> n;
    cout<<"Enter "<<n<<" values: ";
    for(int i=0;i<n;i++){
        cin >> x;
        vec.push_back(x);
    }
    cout<<"Enter value of K: ";
    cin >> k;
    cout << kthSum(vec,n,k) << endl; 
}