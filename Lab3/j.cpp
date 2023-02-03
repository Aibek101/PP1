#include <iostream> //a.assylkhanov

using namespace std;

int main()
{
    int a, target;
    cin >> a;
    cin >> target;
    int arr[a];
    int max4target = -1000000;
    int ioftarget;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
        
        if(max4target < arr[i] && arr[i] <= target){
            max4target = arr[i];
            ioftarget = i+1;
        }
    }

    cout << ioftarget << endl;

    return 0;
}