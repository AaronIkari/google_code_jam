#include <string>
#include <iostream>

using namespace std;

int main() {
    int T, N;
    string P;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        cin.ignore();
        getline(cin, P);
        string rP;
		for (int i = 0; i < P.length(); i++) {
			if (P[i] == 'E') {
				rP.push_back('S');
			} else {
				rP.push_back('E');
			}
		}
		cout << "Case #" << t << ": " << rP.c_str() << endl;
    }
}
