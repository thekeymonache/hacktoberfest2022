
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int change_coin(int arr[],int m,int n,int j,int s){
if(j>m||s>n)
return 0;
if(s==n){
    
return 1;
}
return(change_coin(arr,m,n,j,s+arr[j])+change_coin(arr,m,n,j+1,s));
}
int main(){
     
int m;//size of array
cin>>m;
int arr[m];

for(int i=0;i<m;i++){
    cin>>arr[i];
}
int n;
cin>>n;
int j=0;
int s=0;
int r=change_coin(arr,m,n,j,s);
cout<<r;
}
