#include <iostream>
#include <vector>
using namespace std;
vector<string> reverse_each_word(string str)
{
    cout << "Str : " << str<<endl;
    vector<string> recv_str;
    string temp_str;
    string recv_string;

    for (int i = 0;i <= str.length();i++)
    {
        if (str[i] != ' ')
        {
            temp_str += str[i];
        }
        else
        {
            for (int j = temp_str.length();j >= 0;j--)
            {
                recv_string += temp_str[j];
            }
            recv_string += " ";
                recv_str.push_back(recv_string);
                recv_string.clear();
                temp_str.clear();
           // }
        }
    }
    if (!temp_str.empty())
    {
        for (int j = temp_str.length() - 1; j >= 0; j--)
        {
            recv_string += temp_str[j];
        }
        recv_string += " ";
        recv_str.push_back(recv_string);
    }

    return recv_str;
   


}
int main()
{
    string str = "hello world cpp";
    vector<string> recv = reverse_each_word("hello world cpp");
    for (auto i : recv)
    {
        std::cout <<  i;
    }
}

