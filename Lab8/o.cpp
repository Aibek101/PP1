#include <iostream> //@a.assylkhanov
#include <set>

using namespace std;

int main()
{   
    string x;
    cin >> x;
    set<char> a;

    for(int i = 0; i < x.size();i++){
        if(x[i] <= 90){
            x[i]=x[i]+32;
        }
    }
    for(int i = 0; i < x.size(); i++){
        a.insert(x[i]);
    }

    cout << a.size() << endl;
    set<char>::iterator b;

    for(b = a.begin(); b != a.end(); b++){
        cout << *b << " ";
    }

    return 0;
}