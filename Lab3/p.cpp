#include <iostream> //@a.assylkhanov
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    double b = sqrt(a);
    int c = b;
    
    if(c * c == a){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}