#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter total no of frames:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the frame which is lost:";
    int re;
    cin>>re;
    vector<int> v;
    vector<int> retrans;
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        v.push_back(arr[i]);
        if(count == re){
            v.push_back(arr[i]);
            retrans.push_back(arr[i]);
            count=1;

        }
        
    }
    cout<<"Total packets sent:";
    cout<<v.size()<<endl;
    cout<<"Total no of retransmitted frames:";
    cout<<retrans.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    cout<<"enter total n o of frames : ";
//    int frames;
//    cin>>frames;
//    cout<<"enter which nth frame is lost : ";
//    int no;
//    cin>>no;
//    cout<<"Enter n : ";
//    int N;
//    cin>>N;
//    int start=1;
//    vector<int> s;
//    int count=0;
//    while(start<=frames){
//        s.push_back((start));
//        count++;
//        start++;
//        if(count==no){
//            count=0;
//            int a=int(s.back());
        
//            s.back()=-1;
//            int c=0;
//            for(int i=a+1;i<=(a+N-1);i++){
//                if(i<=frames)
//                {
//                    s.push_back((i));
//                    c++;
//                }   
//            }
//            start--;
//            count=c;
//        }
//    }
//   for(auto it : s){
//       if(it==-1){
//           cout<<"X ";
//       }
//       else
//       cout<<it<<" ";
//   }
//   cout<<endl;
//   cout<<"total frames sent  : "<<s.size()<<endl;

//     return 0;
// }
