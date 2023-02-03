#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int arr[a];
    int max = -1000000;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        b = arr[i];
        
        if(b > max){
            max = b;
        }
    }

    cout << max << endl;

    return 0;
}