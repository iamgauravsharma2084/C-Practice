

#include <iostream>
#include <vector>
using namespace std;
char first_non_repeating(string str)
{
    for (int i = 0;i <= str.length() ;i++)
    {
        int count = 0;
        for (int j = 0;j <= str.length() ;j++)
        {
            if (str[i] == str[j])
            {
                count++;
           }
        }

        if (count == 1)
        {
            return str[i];
        }



    }
    

    return '\0';
}





int main()
{
    string str = "ggaurav";
    char result = first_non_repeating(str);

    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;
}

