#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xo = 0;
            for(int k=i;k<=j;k++){
                xo = xo ^ arr[k];

            }
            if(xo == x){
                count++;
            }

        }
    }
    cout<<count;
}