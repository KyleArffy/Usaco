#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
	int a,b,c,d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (b < c || d < a) {
		cout << (b-a) + (d-c);
	} else {
		if (c <= a) { 
			a = c;
		}
		if (d >= b) {
			b = d;
		}
		cout <<	b - a;
	}
}