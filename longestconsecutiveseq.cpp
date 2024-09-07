// optimal
// O(n+m)


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     int hash[max+1] = {0};
//     vector<int> v;
    
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;

//     }
//     int count = 0;
//     for(int i=0;i<max+1;i++){
//         if(hash[i]>0){
//             count++;
//         }
//         else{
//             v.push_back(count);
//             count = 0;
//         }
//     }
    
//     int ma = v[0];


//     for(int i=0;i<v.size();i++){
//         if(v[i]>ma){
//             ma = v[i];
//         }

//     }
//     cout<<ma;
// }


// Bruteforce

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     sort(v.begin(),v.end());
//     int count = 1,cnt=0;
//     int temp = v[0];
//     for(int i=1;i<n;i++){
//         if(v[i] == temp){
//             continue;
//         }
//         else if(v[i] == v[i-1] + 1){ 
//             count++;
//         }
//         else{
//             if(count>cnt){
//                 cnt = count;
                
//             }
//             count = 1;
//         }
//         temp = v[i];

//     }
//     cout<<cnt;

// }