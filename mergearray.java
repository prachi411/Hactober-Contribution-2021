public class mergearray {
    public static void main(String[] args) {
        int a[]={1,3,4,6};
        int m=a.length;
        int b[]={2,5,7,8};
        int n=b.length;
        int[] c =new int[m+n];
        System.out.println("length of new array is: " +c.length);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(a[i]<b[j]){
                c[k++]=a[i++];
            }
            else{
                c[k++]=b[j++];
            }
        }
        while(i<m){
            c[k++]=a[i++];
        }
        
        while(j<n){
            c[k++]=b[j++];
        }
        for(int l=0;l<m+n;l++){
            System.out.print(" "+c[l]);
        }

    }
}
