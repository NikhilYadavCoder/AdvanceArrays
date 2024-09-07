// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int x,y;
//         cin>>x>>y;
//         if(x<50){
//             cout<<"Z"<<endl;
//         }
//         else if(x>=50 && y<50){
//             cout<<"F"<<endl;
//         }
//         else{
//             cout<<"A"<<endl;
//         }
//     }


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         string arr;
//         cin>>arr;
//         int count=0;
//         int temp=0;
//         vector<int> v;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i] == '1'){
//                 count++;
//             }
            
//         }
//         for(int i=0;i<arr.size();i++){
//             if(arr[i] == '0'){
//                 temp++;
//             }
//             else{
//                 v.push_back(temp);
//                 temp=0;
//             }
//         }
//         v.push_back(temp);
//         int ma = INT_MIN;
//         for(int i=0;i<v.size();i++){
//             if(v[i]>ma){
//                 ma = v[i];
//             }
//         }
//         int res;
//         res = count + ma;
//         cout<<res<<endl;
//     }
    


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         string st="";
        
//         for(int i=0;i<n-k;i++){
//             st = st + s[i];


//         }
//         cout<<st<<endl;

//     }


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    int alice=0,bob=0;

//         if(n%2==0){

//             int count=0;
//             for(int i=0;i<n;i++){
// 	        if(arr[i]%2 == 0){
//                 count++;
	            
// 	        }
	        
// 	        }
//             if(count%2==0){
//                 cout<<"DRAW"<<endl;
//             }
//             else{
//                 cout<<"BOB"<<endl;
//             }
        
//         }
//         else{

//         }
	    
// 	}

// }

