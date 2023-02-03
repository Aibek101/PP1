#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = i * j;
            arr[0][j] = j;
            arr[i][0] = i;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}