

#include <iostream>
using namespace std;
bool is_palindrome(int num)
{
    int save_num = num;

    int a ;
    int re_num=0;

    while (num > 0)
    {
        a = num % 10;
        re_num = (re_num * 10) + a;
        num = num / 10;

   }


    //cout << "num :" << re_num;
    if (re_num == save_num)
        return true;


    return false;


}

int main()
{
    int value = is_palindrome(1213);
    std::cout << value;
}

