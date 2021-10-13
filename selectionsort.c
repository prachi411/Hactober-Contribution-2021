#include<stdio.h>
int main()
{    int n,p[30],index;
    printf("enter length of array::");
    scanf("%d",&n);
    printf("\n enter array elements here::");
    for(int i=0;i<n;i++)
    {     scanf("%d",&p[i]);		}
    for(int pass=0;pass<n-1;pass++)
    {       index=pass;
        for(int i=pass+1;i<n;i++)    {
            if(p[i]<p[index])    {      index=I;    }  }        int temp = p[pass];
        	p[pass] = p[index];
        	p[index] = temp;
    }	 printf("\n================================\n");
    for(int i=0;i<n;i++)
    {      printf("%d, ",p[i]);	    }
    return 0;
}
