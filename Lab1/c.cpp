#include <iostream> //@a.assylkhanov
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string s;
    int sum = 0, power = 4;

    while(a > 0){
        int r = a%2;
        a = a/2;
        power--;

        if(char v = r+48 == '1'){
        sum += pow(2, power);
        }
    }

    cout << sum << endl;

    return 0;
}