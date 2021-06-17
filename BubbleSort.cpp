//
// Created by Shoaib on 6/17/2021.
//

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
