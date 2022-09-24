#include<bits/stdc++.h>

using namespace std;

void all_subsequences_with_sum(int n,vector<int> &in,vector<int> &res, int c_sum, int ind, int sum){
   if(ind>=n){
      //print list
      if(c_sum==sum){
          for(auto item: res){
            cout<<item<<" ";
         }
         cout<<endl;
      }
     
      return;
   }
   //include ind
   res.push_back(in[ind]);
   c_sum+=in[ind];
   all_subsequences_with_sum(n,in,res,c_sum,ind+1,sum);
   res.pop_back();
   c_sum-=in[ind];
   //don't include ind
   all_subsequences_with_sum(n,in,res,c_sum,ind+1,sum);
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
   int sum;
   cin>>sum;
   int c_sum=0;
   vector<int> res;
   all_subsequences_with_sum(n, in, res, c_sum, 0, sum);

   return 0;

}