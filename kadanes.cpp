#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> msub,csub;
    int m = INT_MIN;
    int sum = arr[0];
    csub.push_back(arr[0]);
    for(int i=1;i<n;i++){

        sum = sum + arr[i];
        csub.push_back(arr[i]);
        
        if(sum>m){
            m = sum;
            msub =  csub;
        }
        if(sum<0){
            csub.clear();
        
            sum = 0;
        }

    }
    for(int i=0;i<msub.size();i++){
        cout<<msub[i];
    }
    
    cout<<endl<<m;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
   
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> current_subarray;
//     vector<int> max_subarray;
//     int current_sum = arr[0];
//     int max_sum = arr[0];

//     current_subarray.push_back(arr[0]);

//     for(int i = 1; i < n; i++) {
//         current_sum = current_sum + arr[i];
//         current_subarray.push_back(arr[i]);

//         if(current_sum > max_sum) {
//             max_sum = current_sum;
//             max_subarray = current_subarray;
//         }

//         if(current_sum < 0) {
//             current_subarray.clear();
//             current_sum = 0;
//         }
//     }

//     // Printing the subarray with maximum sum
//     cout << "Subarray with maximum sum: ";
//     for(int i = 0; i < max_subarray.size(); i++) {
//         cout << max_subarray[i] << " ";
//     }

//     // Printing the maximum sum
//     cout << endl << "Maximum sum: " << max_sum;

//     return 0;
// }
