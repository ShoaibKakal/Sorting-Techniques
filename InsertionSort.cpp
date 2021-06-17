//
// Created by Shoaib on 6/17/2021.
//

/*
	n = array size;
	No. of passes = n-1;
	No. of comparisons = 1+2+3+...+n-1 = n(n-1)/2 = O(n^2);
	No. of Swaps = 1+2+3+4+...+n-1 = n(n-1)/2 = O(n^2);
	Adaptive = true {it's adaptive by nature unlike bubble sort};
	Stable = true;

	Max. Time Complexity = O(n^2);
	Min. Time Complexity = O(n); (if array is already sorted)

*/
#include "iostream"


using namespace std;

void insertion(int A[], int n)
{
        int i, j, x;

        for(i=1; i<n; i++)
        {
            j = i-1;
            x = A[i];
            while(j>-1 && A[j]>x)
            {
                A[j+1] =A[j];
                j--;
            }
            A[j+1] = x;
        }
}
int main()
{
    int A[] = {11, 13, 7, 2, 6, 9, 4, 5, 10, 3}, n=10, i;

    insertion(A, n);

    for(i=0; i<n; i++)
        cout<<A[i] << " ";
}