#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int even = 0;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        
        if(arr[i]%2 == 0){
            even++;
        }
    }
    cout << even << " " << a-even << endl;

    return 0;
}