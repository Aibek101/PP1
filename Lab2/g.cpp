#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int max = -1000000;

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout << max;
    
    return 0;
}