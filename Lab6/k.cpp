#include <iostream> //@a.assylkhanov

using namespace std;

int sum(string s)
{
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        count = count+int(s[i])-48;
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    cout << sum(s) << endl;

    return 0;
}