#include <iostream> //@a.assylkhanov
#include <vector>

using namespace std;

int qwe(string a)
{
    int b = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == ')'){
            b++;
        }
    }

    return b;
}

int main()
{
    string a;
    cin >> a;
    vector<char> b;
    int k = 0;
    int l = b.size();
    
    for(int i = 0; i < a.size(); i++){
        b.push_back(a[i]);
    }
    if(qwe(a) != l-qwe(a)){
        cout << "NO";
    }
    else{
        while(k < l){
            for(int i = 0; i < b.size(); i++){
                if(b[i] == '(' && b[i+1] == ')'){
                    b.erase(b.begin()+i);
                    b.erase(b.begin()+i);
                }
            }
            
            k++;
        }
        if(b.size() == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    
    return 0;
}
