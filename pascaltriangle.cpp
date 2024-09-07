// //to find element at nth row and rth col

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int res = 1; 
//     for(int i=0;i<r;i++){
//         res = res * (n-i);
//         res = res / (i+1);
//         }
//         cout<<res;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int res = 1;
//     for(int i=0;i<r;i++){
//         res = res * (n-1-i);
//         res = res / (i+1);


//     }
//     cout<<res;

// }


//find entire nth row of pascals triangle

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cout<<1<<" ";
//     int ans = 1;
//     for(int i=1;i<n;i++){
        
//         ans = ans * (n-i);
//         ans = ans /i;
//         cout<<ans<<" ";


//     }
// }

//Pascal Triangle

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         int ans=1;
//         cout<<1<<" ";
//         for(int j=1;j<i;j++){
//             ans = ans * (i-j);
//             ans = ans /j;
//             cout<<ans<<" ";

 
 
//         }
//         cout<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int l,r;
	    cin>>l>>r;
	    int n = r-l+1;
	    int a = l;
        int b = r;
        int check = __gcd(a,b);
        vector<int> v;

        if(check == 1){
            for(int i=l;i<r;i++){
                v.push_back(i+1);
            }
            v.push_back(l);
        }
        else{
            if(n%2!=0){
                vector<int> tempv;
                vector<int> temporary;
                for(int i=l;i<=r;i++){
                    temporary.push_back(i);
                }

                for(int i=l;i<r;i++){
                tempv.push_back(i+1);
                }
                tempv.push_back(l);

                int st = n-1;\
                int flg = 0;
                
                for(int i=n-2;i>=0;i--){
                    int w,e;
                    w = __gcd(tempv[st],temporary[i]);
                    e = __gcd(tempv[i],temporary[st]);
                    
                    if(w == 1 && e==1){
                        int f,g;
                        f = tempv[st];
                        g = tempv[i];
                        tempv[i] = f;
                        tempv[st]=g;
                        flg=1;
                        
                        break;
                    }
                }
                if(flg==0){
                    cout<<-1<<endl;
                }
                else if(flg){
                    for(int i=0;i<tempv.size();i++){
                    cout<<tempv[i]<<" ";
                }

                }
            }
            else{
                vector<int> odd;
                for(int i=l+1;i<r;i++){
                    if(i%2!=0){
                        odd.push_back(i);
                    }

                }
                if(odd.size()>0){
                    int flag=0;
                    for(int i=l;i<=r;i++){
                        if(flag == 0){
                            v.push_back(i+1);
                            flag=1;
                        }
                        else{
                            v.push_back(i-1);
                            flag=0;
                        }


                    }
                }

            }
            
        }
        if(v.size()>0){

            for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";

        }
        cout<<endl;

        }
	}

}
