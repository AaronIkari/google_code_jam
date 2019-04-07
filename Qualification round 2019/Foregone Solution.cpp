#include <string>
#include <iostream>

using namespace std;

const int BROKEN = 4;

int main () {
    int T; // 1 <= T <= 100
	string N; // 1 < N < 10^100
	cin >> T;
    for (int t = 1; t <= T; t++) {
        string A, B;
		cin >> N; 

        for (int i = 0; i < N.length(); i++) {
            int Ni = N[i] - '0';

            if (Ni == 0) {
                A += '0';
                B += '0';
                continue;
            } else {
                int Ai = 1;
                int Bi = Ni - Ai;
                while (Ai == BROKEN or Bi == BROKEN) {
                    Ai += 1;
                    Bi -= 1;
                }
                A += (Ai + '0');
                B += (Bi + '0');
            }
        }
        A.erase(0, min(A.find_first_not_of('0'), A.size()-1));
        B.erase(0, min(B.find_first_not_of('0'), B.size()-1));
		cout << "Case #" << t << ": " << A.c_str() << " " << B.c_str() << endl;
    }
}
