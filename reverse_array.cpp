// reverse_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int arr[10];



void reverse_array(int num[10])
{
    int j = 0;
    for (int i = 9;i >= 0;i--)
    {
        arr[j] = num[i];
        j++;
     }


}

int main()
{
    int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
    reverse_array(arr1);
    for (int i = 0;i <= 9;i++)
    {
        std::cout << arr[i] << " ";
   }
}

