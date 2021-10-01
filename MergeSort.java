import java.util.*;

public class MergeSort {
	
	
	static void mergeSort(int l, int r, int arr[])
	{
		int mid = (r+l)/2;
		if(r>l)
		{
			mergeSort(l, mid, arr);
			mergeSort(mid+1, r, arr);
			merge(l, mid, r, arr);
		}
	}
	
	static void merge(int l, int mid, int r, int arr[])
	{
		int i=l,j=mid+1,k=l;
		int b[] = new int[r+1];
		while(i<=mid && j<=r)
		{
			if(arr[i]<=arr[j])
			{
				b[k] = arr[i];
				k++;
				i++;
			}
			else {
				b[k] = arr[j];
				k++;
				j++;
			}
		}
		if(i<=mid)
		{
			while(i<=mid)
			{
				b[k] = arr[i];
				k++;
				i++;
			}
		}
		else {
			while(j<=r)
			{
				b[k] = arr[j];
				j++;
				k++;
			}
		}
		for(k=l;k<=r;k++)
		{
			arr[k] = b[k];
		}
	}
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter length of array");
		int l = sc.nextInt();
		int arr[] = new int[l];
		int i;
		System.out.println("Enter elements of array");
		for(i=0;i<l;i++)
		{
			arr[i] = sc.nextInt();
		}
		mergeSort(0, l-1, arr);
		System.out.println("Sorted array is");
		for(i=0;i<l;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}
