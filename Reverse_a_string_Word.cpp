#include <iostream>
#include <vector>
using namespace std;
string reverse_string_Word(string str)
{

    std::cout << "Befer String : " << str<<endl;

    string temp_str;
    string re_str;

    for (int i = 0;i <= str.length() - 1;i++)
    {
        if (str[i] != ' ')
        {
            re_str += str[i];
            
        }
        else
        {
            if (!re_str.empty())
            {
                temp_str = re_str + " " + temp_str;
                re_str.clear();
            }
        }
    }

   
    if (!re_str.empty())
    {
        temp_str = re_str + " " + temp_str;
    }

    return temp_str;

}
int main()
{ 
   string recv = reverse_string_Word("Gaurav Kumar Shru");

   std::cout << recv;
    //for (int i = recv.size()-1; i >= 0; i--)
    //{
    //    std::cout << recv[i]<<" ";
    //}


   
}

