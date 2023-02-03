#include <iostream> //@a.assylkhanov
#include <string>

using namespace std;

string deleter(string a)
{
    int k = 0;

    while(k < a.size()){
        for(int i = 0; i < a.size(); i++){
            if(int(a[i]) == 65 || int(a[i]) == 69 || int(a[i]) == 73 || int(a[i]) == 79 || int(a[i]) == 85){
                a.erase(i,1);
            }
            else if(int(a[i]) == 97 || int(a[i]) == 101 || int(a[i]) == 105 || int(a[i]) == 111 || int(a[i]) == 117){
                a.erase(i,1);
            }
        }

        k++;
    }

    return a;
}

int main()
{
    string s;
    getline(cin, s);

    cout << deleter(s) << endl;

    return 0;
}