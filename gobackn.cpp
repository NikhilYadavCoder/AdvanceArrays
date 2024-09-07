

#include <bits/stdc++.h>
using namespace std;


int main()
{
   
   cout<<"enter total n o of frames : ";
   int frames;
   cin>>frames;
   
   cout<<"Enter n : ";
   int N;
   cin>>N;
   
   cout<<"enter which nth frame is lost : ";
   int no;
   cin>>no;
   
   int start=1;

   vector<int> s;
   int count=0;
   while(start<=frames){
       s.push_back((start));
    
       
       count++;
       start++;
       if(count==no){
           count=0;
           int a=int(s.back());
        
           s.back()=-1;
           int c=0;
           for(int i=a+1;i<=(a+N-1);i++){
               if(i<=frames)
               {
                   s.push_back((i));
                   c++;
               }
               
               
           }
           start--;
           count=c;
       }
   }
  for(auto it : s){
      if(it==-1){
          cout<<"x ";
      }
      else
      cout<<it<<" ";
  }
  cout<<endl;
  cout<<"total frames sent  : "<<s.size()<<endl;

    return 0;
}