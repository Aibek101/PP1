#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << a+(b/100)+(b%10) << endl;

    return 0;
}