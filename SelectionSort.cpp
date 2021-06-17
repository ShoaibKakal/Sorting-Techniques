//
// Created by Shoaib on 6/17/2021.
//
#include "iostream"
using namespace std;



/*
	n = array size;
	No. of passes = n-1;
	No. of comparisons = 1+2+3+...+n-1 = n(n-1)/2 = O(n^2);
	No. of Swaps = (n-1) = O(n);
	Adaptive = False {The element will interchange with itself};
	Stable = False {It does not preserve the order};
    Intermediate Results = Useful

    Max. Time Complexity = O(n^2);
	Min. Time Complexity = O(n^2); (even if array is already sorted)

*/

//using min
//void Selection(int A[], int n) {
//    int temp, i, j;
//
//    for(i=0; i<n; i++)
//    {
//        int min = INT16_MAX;
//        for(j=i; j<n; j++)
//        {
//            if(A[j]<min)
//            {
//                min = A[j];
//                temp = j;
//            }
//        }
//        A[temp] = A[i];
//        A[i] = min;
//    }
//}

//using two j,k pointers.
void Selection(int A[], int n)
{
    int i, j, k, temp;

    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        //swap
        temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}

int main() {
    int A[] = {11, 13, 7, 2, 6, 9, 4, 5, 10, 3}, n = 10, i;

    Selection(A, n);

    for (i = 0; i < n; i++)
        cout << A[i] << " ";
}