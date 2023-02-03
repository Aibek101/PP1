#include <iostream> //@a.assylkhanov
#include <cmath>
#include <iomanip>

using namespace std;

void hypotenuse(int a, int b)
{
    double c;

    c = sqrt(a*a + b*b);

    cout << setprecision(4);
    cout << c;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    hypotenuse(a, b);

    return 0;
}