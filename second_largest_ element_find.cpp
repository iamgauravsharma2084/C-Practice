

#include <iostream>
#include <vector>
using namespace std;


int second_largest_element_find(vector<int> num)
{
    int largest = num[0];
    int second_largest = INT_MIN;

    for (int i = 1; i < num.size(); i++)
    {
        if (num[i] > largest)
        {
            second_largest = largest;
            largest = num[i];
        }
        else if (num[i] > second_largest && num[i] < largest)
        {
            second_largest = num[i];
        }
    }

    return second_largest;
}

int main()
{
    vector<int> arr = { 10, 5, 20, 8, 20, 15 };
    int value = second_largest_element_find(arr);
    std::cout <<"\nSecond_largest_element in vector :  "<< value;
}

