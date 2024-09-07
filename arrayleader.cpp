// Brute force Method 
// Time Complexity - O(n^2)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     v.push_back(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         int count = 0;
//         for(int j = n-1;j>i;j--){
//             if(arr[j]<arr[i]){
//                 count++;
//             }
//         }
//         if(count == n-i-1){
//             v.push_back(arr[i]);
//         }
//         }
//     cout<<"Array Leaders:";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


// Optimal Method

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     int max = INT_MIN;
//     for(int i=n-1;i>=0;i--){
//         if(arr[i]>max){
//             max = arr[i];
//             v.push_back(arr[i]);
//         }
//     }
//     cout<<"Array Leaders:";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


