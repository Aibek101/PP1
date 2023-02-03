#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 0){
    cout << "None" << endl;
    }
    if (a != 0){
        if (a > 1 and a < 6){
            if (a%2 == 0){
                cout << "Not Super" << endl;
            }
            else{
            cout << "Super" << endl;
            }
        }
        if (a > 5 and a < 21){
            if (a%2 == 0){
                cout << "Super" << endl;
            }
            else{
            cout << "Super" << endl;
            }
        }
        if (a > 20){
            if (a%2 == 0){
                cout << "Not Super" << endl;
            }
            else{
            cout << "Super" << endl;
            }
        }
    }
    
    return 0; 
}