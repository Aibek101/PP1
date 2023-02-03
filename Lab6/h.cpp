#include <iostream> //@a.assylkhanov

using namespace std;

int availability(string s)
{
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        if(int(s[i])%2 == 1){
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    if(availability(s) == 0){
        cout << "Valid" << endl;
    }
    else{
        cout << "Not valid" << endl;
    }

    return 0;
}