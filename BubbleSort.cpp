//
// Created by Shoaib on 6/17/2021.
//


/*
	n = array size;
	No. of passes = n-1;
	No. of comparsions = 1+2+3+...+n-1 = n(n-1)/2 = O(n^2);
	No. of Swaps = 1+2+3+4+...+n-1 = n(n-1)/2 = O(n^2);
	Adaptive = true;
	Stable = true;
	
	Max. Time Complexity = O(n^2);
	Min. Time Complexity = O(n); (if array is already sorted)

*/
#include "iostream"
using namespace std;
int main()
{

    int ar[] = {8,5,6,9,3,2};

    int temp = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i; j++)
        {
            if(ar[j] > ar[j+1]) //comparsions
            {
                temp = ar[j+1];  //swaps
                ar[j+1] = ar[j];
                ar[j] = temp;

            }
        }
    }


    for(int i=0; i<=5; i++)
    {
        cout<< ar[i]<< " ";
    }
}
