
#include <iostream>

using namespace std;
int factorial(int);
int getSum(int);

int main()
{
	int input;
	cin >> input;
	getSum(input);
	//cout << factorial(3) << endl;
	system("pause");
}
int factorial(int N) {
	if (N == 0){
		return 1;
	}
	if (N < 0) {
		return 0;
	}
	return N* factorial(N-1);
}
int getSum(int a) {
	int sum = 0;
	for (int i = 0; i < a + 1; i++) {
		cout << sum << "+" << i << "=";
		sum += i;
	}
	cout << "(" << sum << ")" << endl;
	return sum;
}

