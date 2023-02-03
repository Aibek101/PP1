#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << ".";
        }
        cout << i + 1;
        for(int j = 0; j < i; j++){
            cout << ".";
        }
        cout << endl;
    }

    return 0;
}