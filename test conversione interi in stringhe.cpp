#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>

using namespace std;

string int2string(int intero)
{
    string s[4];
    s := to_string(intero);
    return s;
}

int main()
{
    cout>>int2string(23);
    system("PAUSE");
    return 0;
}

