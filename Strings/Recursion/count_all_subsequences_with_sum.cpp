#include<bits/stdc++.h>

using namespace std;

int count_all_subsequences_with_sum(int n,vector<int> &in, int c_sum, int ind, int sum){
   if(ind>=n){
      //print list
      if(c_sum==sum){
          return 1;
      }
     
      return 0;
   }
   //include ind
   c_sum+=in[ind];
   int l = count_all_subsequences_with_sum(n,in,c_sum,ind+1,sum);

   c_sum-=in[ind];
   //don't include ind
   int r = count_all_subsequences_with_sum(n,in,c_sum,ind+1,sum);

   return l+r;
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
   cout<<count_all_subsequences_with_sum(n, in, c_sum, 0, sum);

   return 0;

}