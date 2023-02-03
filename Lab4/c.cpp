#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int n;
    int m;
    int count = 0;
    cin >> n;
    cin >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] < 0){
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}