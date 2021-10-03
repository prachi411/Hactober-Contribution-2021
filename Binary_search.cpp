int binsearch(int A[], int low, int high, int key){

    while(low<=high){

        int mid = (low + high)/2;

        if (A[mid]==key){
            return mid;
        }

        else if(key<A[mid]){
            high = mid-1;
        }

        else
        {
            low = mid+1;
        }
        
    }
    return -1;
}

int main(){
    int m;
    cout<<"Enter length of the array: ";
    cin>>m;
    int A[m];

    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    
    //An example of how to use the function:
    //cout<<binsearch(A,0,m-1,2);

    return 0;

}
