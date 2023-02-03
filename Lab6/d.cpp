#include <iostream> //@a.assylkhanov

using namespace std;

int spotlight(int a, int arr[], int b)
{
    for(int i = 0; i < a; i++){
        if(arr[i] == b){
            b = -1;

            break;
        }
    }

    return b;
}

int main()
{
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int b;
    cin >> b;

    if(spotlight(a, arr, b) == -1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}