#include <iostream> //@a.assylkhanov

using namespace std;

void rev(int n, int m[])
{
    int a;

    for(int i = 0; i < n/2; i++){
        a = m[i];
        m[i] = m[n-i-1];
        m[n-i-1] = a;
    }
    for(int i = 0; i < n; i++){
        cout << m[i] << " ";
    }
}

int main()
{
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    rev(a, arr);

    return 0;
}