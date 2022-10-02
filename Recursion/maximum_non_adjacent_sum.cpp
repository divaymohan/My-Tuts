#include<bits/stdc++.h>

using namespace std;

int solution(vector<int>& in, int n, int ind){
    //base condition
    if(ind<0) return 0;
    //pich indx
    int left = in[ind] + solution(in,n,ind-2); 
    //dont pick indx
    int right = solution(in,n,ind-1);

    //return max
    return max(left, right);
}



void _get_input(vector<int> &in, int n){
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }
}

int main(){
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int n;
   cin>>n;
   vector<int> in;
   _get_input(in, n);
   cout<< solution(in, n, n-1);
   return 0;

}