#include <iostream> //@a.assylkhanov

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 0){
    cout << "None" << endl;
    }
    if (a!=0){
        if (a%2==0){
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    }
    
    return 0; 
}