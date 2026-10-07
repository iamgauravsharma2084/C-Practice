 #include <iostream>
#include <vector>
using namespace std;
vector<int> remove_duplicates(vector<int> num)
{
    vector<int> maintain_vector;

    for (int i = 0; i < num.size(); i++)
    {
        bool found = false;
        for (int j = 0;j < maintain_vector.size();j++)
        {
            if (num[i] == maintain_vector[j])
            {
                cout << " i : " << i << "\n";
              found = true;
              break;
            }
        }


        if(!found)
          maintain_vector.push_back(num[i]);
    }

    return maintain_vector;
}
int main()
{
    vector<int> num = { 10, 20, 10, 30, 20, 40, 30 };

    vector<int> arr = remove_duplicates(num);
    
    for (int i : arr)
    {
        std::cout << i << " ";
    }
}

