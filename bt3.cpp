/*bài toán tám quân hậu*/
#include <iostream>
using namespace std;

int dong[100], cot[100], HoangHau[100], QuyPhi[100];
int n, dem;

void Try(int x);

int main() {
	cin >> n;
	Try(0);
	cout << dem;
	return 0;
}

void Try(int x){
	if (x == n)
		++dem;
		
	else {
		for (int i = 0; i < n; ++i){
			if (cot[i] == 0 && HoangHau[x - i + n] == 0 && QuyPhi[i + x] == 0){
				cot[i] = 1;
				HoangHau[x - i + n] = 1;
				QuyPhi[i + x] = 1;
				Try(x + 1);
				QuyPhi[i + x] = 0;
				HoangHau[x - i + n] = 0;
				cot[i] = 0;
			}
		}
	}
}