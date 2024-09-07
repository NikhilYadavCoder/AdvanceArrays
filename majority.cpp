
// //better method
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int max = INT_MIN;
// //     for(int i=0;i<n;i++){
// //         if(arr[i]>max){
// //             max = arr[i];
// //         }
// //     }
// //     int hash[max+1]={0};
// //     for(int i=0;i<n;i++){
// //         hash[arr[i]]++;
// //     }
// //     int com = floor(n/3);
// //     int count=0;
// //     for(int i=0;i<max+1;i++){
// //         if(hash[i]>com){
// //             cout<<i<<" ";
// //             count++;
// //         }
        
// //     }
// //     if(count==0){
// //         cout<<0;
// //     }
    
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int com = floor(n/3);
//     int count=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//             count++;
//         }
//         else{
//             if(count>com){
//                 cout<<arr[i]<<" ";
                
//             }
//             count=1;
//         }
        
//     }

// }

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter totral no.of frames: ";
    cin>>n;
    int m;
    cout<<"enter lost bit : ";
    cin>>m;
    cout<<"re transmitting frame are : ";
    int t=0;
    for(int i=1;i<=n;i++){
        i=i+m-1;
        int h=0;
        for(int j=i;j<=n&&j-i<4;j++){
            cout<<j<<" ";
            t++;
            h++;
        }
 
        // cout<<h<<endl;
        if(h<m){
            h++;
        }
  
      
        i=(i-h)+1;
        cout<<i<<" ";
        
    }
     cout<<endl;
       cout<<"Total frames re transmitted= "<<t<<endl;
       cout<<"Total frames transmitted= "<<n+t<<endl;
    
    

    return 0;
}