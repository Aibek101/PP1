#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        b = arr[i];
        
        if(b % 2 != 0){
            cout << b << " ";
        }
    }

    return 0;
}