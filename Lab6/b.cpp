#include <iostream> //@a.assylkhanov
#include <cmath>

using namespace std;

void arr(int a[], int n, int b[])
{
    int c[n];

    for(int i = 0; i < n; i++){
        c[i] = abs(a[i]-b[i]);
        cout << c[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int b[n];

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    arr(a, n, b);
    
    return 0;
}