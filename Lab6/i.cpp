#include <iostream>
using namespace std;

string caps(string s)
{
    for(int i = 0; i < s.size(); i++){
        if(i%2 == 0){
            if(int(s[i]) > 96){
                s[i] = char(int(s[i])-32);
            }
        }
    }

    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << caps(s) << endl;

    return 0;
}