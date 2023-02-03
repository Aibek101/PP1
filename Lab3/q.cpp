#include <iostream> //@a.assylkhanov
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a == 1){
        cout << "No";

        return 0;
    }

    for(int i = 2; i * i < a; i++){
        if(a % i == 0){
            cout << "No";

            return 0;
        }
    }
    
    cout << "Yes";
    
    return 0;
}