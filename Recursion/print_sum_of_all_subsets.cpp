#include<bits/stdc++.h>

using namespace std;

void count_all_subsequences_with_sum(int n,vector<int> &in, int c_sum, vector<int> &res, int ind){
   if(ind>=n){
      //add sum to list
      res.push_back(c_sum);
      return ;
   }
   //include ind
   c_sum+=in[ind];
   count_all_subsequences_with_sum(n,in,c_sum,res,ind+1);

   c_sum-=in[ind];
   //don't include ind
   count_all_subsequences_with_sum(n,in,c_sum,res,ind+1);

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
   int c_sum=0;
   vector<int> res;
   count_all_subsequences_with_sum(n, in, c_sum, res, 0);
   sort(res.begin(),res.end());
   for(auto item: res) cout<<item<<" ";

   return 0;

}