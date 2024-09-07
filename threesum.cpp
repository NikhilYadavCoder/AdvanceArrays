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
//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         if(i>0 && v[i] == v[i-1]){continue;}
//         int j=i+1;
//         int k=n-1;
//         while(j<k){
//             int sum = v[i] + v[j] + v[k];
//             if(sum<0){
//                 j++;
//             }
//             else if(sum>0){
//                 k--;
//             }
//             else{
//                 ans.push_back({v[i],v[j],v[k]});
//                 j++;
//                 k--;
//                 while(j<k && v[j] == v[j-1])j++;
//                 while(j<k && v[k] == v[k+1])k--;
//             }
//         }

//     }
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    for(int i=1;i<=n;i++){
        


    }
}