/* Cpp program to print all possible subsets of a set */

#include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(int arr[], int n)
{
    int count = pow(2, n);
    
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < n; j++) {
            // This if condition will check if jth bit in binary representation of i is set or not
            // if the value of (i & (1 << j)) is not 0, include arr[j] in the current subset
            // otherwise exclude arr[j]
            if ((i & (1 << j)) != 0){
                cout <<"i= "<<(1<<j)<< " "<<arr[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    
    cout << "Enter size of the set\n";
    cin >> n;

    int arr[n];
    cout << "Enter Elements of the set\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    allPossibleSubset(arr, n);

    return 0;
}
