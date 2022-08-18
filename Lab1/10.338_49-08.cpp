//Codeforce Problem No-281A.
//Problem Name-Word Capitalization.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = towupper(s[0]);
    cout << s << endl;
    return 0;
}
