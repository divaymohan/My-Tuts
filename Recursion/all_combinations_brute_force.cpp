#include<bits/stdc++.h>

using namespace std;
//solution 1
void all_combination(int n,vector<int> &in, int c_sum, vector<int> &res, int ind, set<vector<int>> &overall_res){
   if(ind>=n){
      //add sum to list
      if(c_sum==0){
         overall_res.insert(res);
      }
       
      return ;
   }
   //include ind
   if(c_sum>=in[ind]){
      c_sum-=in[ind];
      res.push_back(in[ind]);
      all_combination(n,in,c_sum,res,ind+1,overall_res);
      c_sum+=in[ind];
      res.pop_back();

   }
   //don't include ind
   all_combination(n,in,c_sum,res,ind+1,overall_res);

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
   sort(in.begin(),in.end());
   vector<int> res;
   set<vector<int>> overall_res;
   all_combination(n, in, c_sum, res, 0, overall_res);
   //print the result
   for(auto res: overall_res){
      for(auto item: res){
         cout<<item<<" ";
      }
      cout<<endl;
   }
   return 0;

}