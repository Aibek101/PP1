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
        for(int j = 0; j < a; j++){
            if(arr[i] >= arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for(int i = 0; i < a; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}