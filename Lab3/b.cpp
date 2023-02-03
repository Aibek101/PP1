#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int arr[a];
    int count = 0;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        b = arr[i];
        
        if(b > 0){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}