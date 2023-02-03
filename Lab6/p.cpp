#include <iostream> //@a.assylkhanov

using namespace std;

int positive(int a)
{
    if(a < 0){
        return -1*a;
    }
    else{
        return a;
    }
}

int main()
{
    int a;
    cin >> a;

    cout << positive(a) << endl;

    return 0;
}