#include<bits/stdc++.h>
using namespace std;


int candy(vector<int> &A) {
    vector<int> sol(A.size(),1);
    for(int i=A.size()-1;i>0;i--)
    if(A[i-1]>A[i])
    sol[i-1]=sol[i]+1;
    
    for(int i=0;i<A.size()-1;i++)
    if(A[i+1]>A[i])
    sol[i+1]=max((sol[i]+1),sol[i+1]);
    int sm=0;
    for(int i=0;i<A.size();i++)
    {//cout<<sol[i]<<" ";
    sm+=sol[i];}
    
    return sm;
    
    
}   

int main()
{   int n;
    cin>>n;

   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   cout<<candy(v);

return 0;

}