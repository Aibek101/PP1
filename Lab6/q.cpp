#include <iostream> //@a.assylkhanov

using namespace std;

double girls(double a, double b)
{
    return (b*100)/a;
}

int main()
{
    double a, b;
    cin >> a;
    cin >> b;

    cout << girls(a, b) << endl;

    return 0;
}