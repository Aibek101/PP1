#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int n;
    int max = 0;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << max << endl;

    return 0;
}