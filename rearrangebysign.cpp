//if no of positive numbers equal to no of negative numbers

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     vector<int> v(n,0);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int pos = 0,neg = 1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             v[pos] = arr[i];
//             pos = pos + 2;
            
//         }
//         else{
//             v[neg] = arr[i];
//             neg = neg + 2;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";

//     }

// }

//OR

// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>0 && arr[i+1]<0  ){
//             continue;
//         }
//         else if(arr[i] < 0 && arr>0 ){
//             continue;
//         }
//         else{
//             swap(arr[i+1],arr[i+2]);

//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// if no of positive numbers not equal to no of negative numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> np,nn;
    int npn=0,nnn=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            np.push_back(arr[i]);
        }
        else{
            nn.push_back(arr[i]);
        }
    }
    int ind = min(np.size(),nn.size());
    vector<int> ans(n,0);
    int pos = 0,neg = 0;
    int cnt1=0,cnt2=0;
    for(int i=0;i<2*ind;i++){
        if(i%2==0){
            ans[i] = np[pos];
            pos++;
            cnt1++;
        }
        else{
            ans[i] = nn[neg];
            neg++;
            cnt2++;
        }
        
    }  
    if(ind == np.size()){
        for(int i=2*ind;i<n;i++){
            ans[i] = nn[cnt2];
            cnt2++;
        }
    }
    else{
        for(int i=2*ind;i<n;i++){
            ans[i] = np[cnt1];
            cnt1++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}