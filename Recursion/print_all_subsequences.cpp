#include<bits/stdc++.h>

using namespace std;

void all_subsequences(int n,vector<int> &in,vector<int> &res, int ind){
   if(ind>=n){
      //print list
      for(auto item: res){
         cout<<item<<" ";
      }
      cout<<endl;
      return;
   }
   //include ind
   res.push_back(in[ind]);
   all_subsequences(n,in,res,ind+1);
   res.pop_back();
   //don't include ind
   all_subsequences(n,in,res,ind+1);
}

int main(){
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int n;
   cin>>n;
   vector<int> in;
   for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      in.push_back(temp);
   }
   vector<int> res;
   all_subsequences(n, in, res, 0);

   return 0;

}