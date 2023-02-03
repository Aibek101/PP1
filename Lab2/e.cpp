#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if(a > b){
        cout << "1" << endl;
    }
    if(a < b){
        cout << "2" << endl;
    }
    if(a == b){
        cout << "0" << endl;
    }

    return 0;
}