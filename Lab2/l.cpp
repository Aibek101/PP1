#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;

    for(int i = 1; i <= a; i += i) {
        cout << i << ' ';
    }

    return 0;
}