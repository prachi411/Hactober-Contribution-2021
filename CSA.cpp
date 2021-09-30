//find the number of contiguos sub array where the leftmost element is not larget than any other eleemnt in the sub array.
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back 
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
int i;
cin>>i;
int arr[i];
stack<int>aru;
for(int a=0;a<i;a++){
    cin>>arr[a];
}
int count=0;
for(int b=0;b<i;b++){
    if(aru.empty()==true){
        aru.push(b);
        count+=aru.size();
        continue;
    }else{
          if(arr[aru.top()]<arr[b]){
              aru.push(b);
              count+=aru.size();
              continue;
          }else{
              while(aru.empty()==false&& arr[aru.top()]>arr[b] ){
                      aru.pop();
              }
              aru.push(b);
              count+=aru.size();

          }



    }


}

cout<<count<<endl;





return 0;
}