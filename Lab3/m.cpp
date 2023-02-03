#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    int sum = 0;
    
    while(cin >> a){
        sum += a;
    }

    cout << sum << endl;

    return 0;
}