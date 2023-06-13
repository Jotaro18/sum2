#include <iostream>
using namespace std;

double sum(int a, int b) {
	return a + b;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << sum(a, b) << endl;
	return 0;
}