#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = 1;

    while(true){
        if(b*b <= a){
            cout << b*b << endl;
            b++;
        }

        if(b*b > a){
            break;
        }
    }

    return 0;
}