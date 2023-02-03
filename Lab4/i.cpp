#include <iostream> //@a.assylkhanov
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            cin >> arr[i][j];
            if(sqrt(arr[i][j]) == floor(sqrt(arr[i][j]))){
                arr[i][j] = sqrt(arr[i][j]);
            }
            cout << arr[i][j] << " ";
    }
    cout << endl;
    }
}