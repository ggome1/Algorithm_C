#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    string t;

    while (cin >> s >> t)
    {
        int len_s = s.length();
        int len_t = t.length();
        int count = 0;

        for (int i = 0; i < len_t; i++)
        {
            if (t[i] == s[count])
                count++;
        }

        if (count == len_s)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}