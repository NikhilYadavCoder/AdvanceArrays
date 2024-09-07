


//Bruteforce method
// O(m*n^2)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n],temp[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//             temp[i][j] = arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(temp[i][j] == 0){
//                 for(int k = 0;k<n;k++){
//                 arr[i][k] = 0;
//             }
//                 for(int k = 0;k<n;k++){
//                 arr[k][j] = 0;
//             }
//             }  
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
            
//         }
//         cout<<endl;
//     } 
// }

