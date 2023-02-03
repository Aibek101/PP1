#include <iostream> //@a.assylkhanov

using namespace std;

string caps(string a)
{
    if(int(a[0]) > 96){
        a = char(int(a[0])-32);
    }
    
    return a;
}

int main()
{
    string a;
    cin >> a;

    cout << caps(a);

    return 0;
}