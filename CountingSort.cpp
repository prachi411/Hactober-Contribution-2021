/* WAP to Apply counting Sort
Counting sort is a stable sorting technique, which is used to sort objects according the keys that are small numbers.
It counts the number of keys whose key values are same. This sorting technique is efficient when difference between 
different keys are not so big, otherwise it can increase the space complexity.
*/
// Program Code :

#include<bits/stdc++.h>
using namespace std;
void display(int *arr, int sz) {
   for(int i = 1; i<=sz; i++)
      cout << arr[i] << " ";
   cout << "\n";
}
int getMax(int arr[], int sz) {
   int max = arr[1];
   for(int i = 2; i<=sz; i++) {
      if(arr[i] > max)
         max = arr[i];
   }
   return max;          // max element from the array
}
void countSort(int *arr, int sz) {
   int output[sz+1];
   int max = getMax(arr, sz);
   int count[max+1];     //create count array
   for(int i = 0; i<=max; i++)
      count[i] = 0;     //initialize count array to all zero
   for(int i = 1; i <=sz; i++)
      count[arr[i]]++;     //increase number count in count array.
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];     //find cumulative frequency
   for(int i = sz; i>=1; i--) {
      output[count[arr[i]]] = arr[i];
      count[arr[i]] -= 1; //decrease count for same numbers
   }
   for(int i = 1; i<=sz; i++) {
      arr[i] = output[i]; //store output array to main array
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n+1];       
   cout << "Enter elements:" << endl;
   for(int i = 1; i<=n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   countSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}

// Output :
/*
Enter the number of elements: 10
Enter elements:
2 5 6 2 3 10 3 6 7 8
Array before Sorting: 2 5 6 2 3 10 3 6 7 8
Array after Sorting: 2 2 3 3 5 6 6 7 8 10
*/