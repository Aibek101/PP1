#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int arr[a];
    int count = 0;

    for(int i = 0 ; i < a; ++i){
        cin >> arr[i];
        b = arr[i];
        while(true){
            if(b % 10 == 0){
                count++;
            }

            b /= 10;
            if(b < 1){
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}