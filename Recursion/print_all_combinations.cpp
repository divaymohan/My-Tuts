#include<bits/stdc++.h>

using namespace std;

void all_combination(int n,vector<int> &in, int c_sum, vector<int> &res, int ind){
   if(ind>=n){
      //print sum to list
      if(c_sum==0){
         for(auto item: res) cout<<item<<" ";
         cout<<endl;
      }
       
      return ;
   }
   //include ind
   if(c_sum>=in[ind]){
      c_sum-=in[ind];
      res.push_back(in[ind]);
      all_combination(n,in,c_sum,res,ind);
      c_sum+=in[ind];
      res.pop_back();

   }
   //don't include ind
   all_combination(n,in,c_sum,res,ind+1);

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
   int c_sum;
   cin>>c_sum;
   vector<int> res;
   all_combination(n, in, c_sum, res, 0);
   return 0;

}