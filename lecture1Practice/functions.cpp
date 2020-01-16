#include <iostream>
#include "functions.h"

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArr(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        std::cout << "arr[i] = " << arr[i] << std::endl;
    }
}