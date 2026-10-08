

#include <iostream>
#include <vector>
using namespace std;
vector<int> find_duplicates(vector<int> num)
{
    vector<int> num_arr;
    for (int i = 0;i <= num.size()-1;i++)
    {
        for (int j = i + 1;j <= num.size()-1;j++)
        {
            if (num[i] == num[j])
            {
                bool already_found = false;

                for (int k = 0;k < num_arr.size() ;k++)
                {
                    if (num_arr[k] == num[i]) {
                        already_found = true;
                        break;
                    }
                }
                
                if(!already_found)
                num_arr.push_back(num[i]);

            }
        }
    }

    return num_arr;



}




int main()
{
    vector<int> number = { 1, 2, 2, 2, 3 };
    vector<int> recv_num = find_duplicates(number);
    for (int i : recv_num)
    {
        cout << i << " ";
    }
}

