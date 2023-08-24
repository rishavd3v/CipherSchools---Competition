#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL){}
};
void insert(Node* head, vector<int>& arr){
    Node* present = head;
    while(present){
        arr.push_back(present->data);
        present = present->next;
    }
}
void display(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    // cout<<"\n";
    Node* head = NULL;
    Node* tail = NULL;

    cout<<"Enter "<<n<<" values: ";
    for(int i=0;i<n;++i){
        int val;    
        cin>>val;
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    vector<int> arr;
    insert(head, arr);
    sort(arr.begin(), arr.end());
    cout<<"Values after sorting: ";
    display(arr);



    return 0;
}