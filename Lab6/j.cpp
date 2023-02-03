#include <iostream>
using namespace std;

int max(int arr[]){
    int max = arr[0];

    for(int i = 0; i < 4; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[4];

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    cout << max(arr) << endl;
}