#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int n, imax = 0, jmax = 0;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] > arr[imax][jmax]){
                imax = i;
                jmax = j;
            }
        }
    }
    cout << imax + 1 << " ";
    cout << jmax + 1 << " ";

    return 0;
}