#include <iostream> //@a.assylkhanov

using namespace std;

int main() {
    string s,t;
	cin >> s;

	for(int i = 0; i < (int)s.size() / 2; i++){
		if(s[i] != s[(int)s.size() - i - 1]){
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
    
	return 0;
}