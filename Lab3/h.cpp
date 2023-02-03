#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int arr[a];
    long long ans = 0;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    for(int i = b - 1; i < c; i++){
        ans += arr[i];
    }

    cout << ans << endl;

    return 0;
}