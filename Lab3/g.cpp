#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int max = -1000000;
    int min = 1000000;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i = 0; i < a; i++){
        if(arr[i] == max){
            arr[i] = min;
        }
    }

    for(int i = 0; i < a; i++){
        cout << arr[i] << endl;
    }

    return 0;
}