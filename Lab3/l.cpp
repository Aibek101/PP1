#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    int arr[500500], arr1[500500], arr2[500500];

    for(int i = 1; i <= a; ++ i){
        cin >> arr[i];
    }

    cin >> b;

    for(int i = 1; i <= b; ++ i){
        cin >> arr1[i];
    }

    int x = 1, y = 1;
    arr[a + 1] = 1e9 + 17;
    arr1[b + 1] = 1e9 + 17;

    for(int i = 1; i <= a + b; ++ i){
        if(arr[x] >= arr1[y]){
            arr2[i] = arr1[y];
            ++ y;
        }
        else{
            arr2[i] = arr[x], ++ x;
        }
    }

    for(int i = 1; i <= a + b; ++ i){
        cout << arr2[i] << ' ';
    }

    return 0;
}