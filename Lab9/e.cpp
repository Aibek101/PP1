#include <iostream> //@a.assylkhanov
#include <map>

using namespace std;

int main()
{
    int a;
    cin >> a;
    map<int, string> b;
    int c = 0;
    string s;
    int count = 0;

    for(int i = 1; i <= a; i++){
        cin >> s;
        b.insert(pair<int, string>(i, s));
    }

    map<int, string>::iterator it;

    for(it = b.begin(); it != b.end(); it++){
        string t = it->second;
        map<int, string>::iterator ss;

        for(ss = b.begin(); ss != b.end(); ss++){
            if(t == ss->second){
                count++;
            }
        }
        if(count == 3){
            c++;
        } 
    }

    cout << c << endl;

    return 0;
}