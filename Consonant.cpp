
#include <iostream>
using namespace std;
int count_consonants(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
                str[i] != 'O' && str[i] != 'U' &&
                str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
                str[i] != 'o' && str[i] != 'u')
            {
                count++;
            }
        }
    }

    return count;
}
int main()
{

    std::cout << "Total consonant  : " << count_consonants("hello world");
}

