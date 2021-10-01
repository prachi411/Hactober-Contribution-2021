#include<bits/stdc++.h>
using namespace std;

int ternarysearch(int a[],int l,int r,int k)
{
    if(l<=r)
    {
        int mid1=(2*l+r)/3;
        int mid2=(l+2*r)/3;

        if(a[mid1]==k)
        {
            return mid1;
        }
        else if(a[mid2]==k)
        {
            return mid2;
        }
        else if(a[mid1]>k)
        {
            return ternarysearch(a,l,mid1-1,k);
        }
        else if(a[mid2]<k)
        {
            return ternarysearch(a,mid2+1,r,k);
        }
        else
        {
            return ternarysearch(a,mid1+1,mid2-1,k);
        }
        
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<ternarysearch(a,0,n-1,k)<<endl;
    return 0;
}