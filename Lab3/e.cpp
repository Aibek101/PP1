#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    long long sum = 0;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    
        sum += arr[i];
    }
    
    cout << sum << endl;

    return 0;
}   