#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < a; i++){
        arr[i] = arr[i] * arr[i];

        cout << arr[i] << ' ';
    }

    return 0;
}