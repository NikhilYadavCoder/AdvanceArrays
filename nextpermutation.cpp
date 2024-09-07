#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int index = n - 1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    cout << index << endl;
    int a;
    for(int i = n - 1; i > index; i--) {
        if(arr[i] > arr[index]) {
            a = i;
            break;
        }
    }
    swap(arr[index], arr[a]); 
    vector<int> v;
    for(int i=n-1;i>index;i--){
        v.push_back(arr[i]);
    }
    
    cout<<"Next Permutation:"<<" ";
    for(int i=0;i<=index;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

