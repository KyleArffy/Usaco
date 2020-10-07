#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
	// freopen("speeding.in","r",stdin);
	// freopen("speeding.out","w",stdout);
	int N, M;
	cin >> N;
	cin >> M;
	int Nl [N], Ns [N], Ml [M], Ms [M];
	int f = 0;
	int c = 0;
	int d = 0;
	int off = 0;
	for (int i = 0; i < N; i++) {
		cin >> Nl[i];
		cin >> Ns[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> Ml[i];
		cin >> Ms[i];
	}
	for (int i = 0; i < N; i++) {
		while (c + Nl[i] >= d) {
			if (Ms[off] - Ns[i] > f) {
				f = Ms[off] - Ns[i];
				// cout << f << " ";
			}
			d += Ml[off];
			off++;
		}
		c += Nl[i];
	}
	cout << f << endl;
// cout << "5";

}