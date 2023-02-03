#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a, b, b1, c, c1;
    cin >> a;
    cin >> b;
    cin >> c;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    
    while(true){
        if(b <= c){
            int x = arr[b - 1];
            arr[b - 1] = arr[c - 1];
            arr[c - 1] = x;

            b++;
            c--;
        }
        else{
            for(int i = 0; i < a; i++){
                cout << arr[i] << " ";
            }

            break;
        }
    }

    return 0;
}