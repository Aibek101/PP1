#include <iostream> //@a.assylkhanov

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << sum(a, b) << endl;

    return 0;
}