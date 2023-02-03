#include <iostream>//@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int count = 0;

    for(int i = 0; i < a; i++){
        cin >> arr[i];

        if(arr[i]%10 == 7){
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}