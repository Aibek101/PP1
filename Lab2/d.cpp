#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if(2 * a % b == 0 and 2 * a > b){
        cout << ((2 * a) / b);
    }
    else if(2 * a % b != 0 and 2 * a > b){
        cout << ((2 * a) / b + 1);
    }
    else{
        cout << "2" << endl;
    }

    return 0;
}    