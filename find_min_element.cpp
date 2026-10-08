
#include <iostream>
#include <vector>
using namespace std;
int find_min_element(vector<int> num)
{
    int fi = num[0];


    for (int i = 1;i < num.size();i++)
    {
        if (num[i] < fi)
        {
            fi = num[i];
        }
    }


    return fi;



}
int main()
{
    vector<int> num = { 10, 25, 7, 40, 15,55 };
    int value = find_min_element(num);
    std::cout << "value : " << value;
}

