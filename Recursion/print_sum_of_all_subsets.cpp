#include<bits/stdc++.h>

using namespace std;

void sum_of_all_subsets(int n,vector<int> &in, int c_sum, vector<int> &res, int ind){
   if(ind>=n){
      //add sum to list
      res.push_back(c_sum);
      return ;
   }
   //include ind
   c_sum+=in[ind];
   sum_of_all_subsets(n,in,c_sum,res,ind+1);

   c_sum-=in[ind];
   //don't include ind
   sum_of_all_subsets(n,in,c_sum,res,ind+1);

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
   sum_of_all_subsets(n, in, c_sum, res, 0);
   sort(res.begin(),res.end());
   for(auto item: res) cout<<item<<" ";

   return 0;

}