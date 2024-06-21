#include <iostream>
#include <string>
using namespace std;

class calc {
private:
	int a;
	int b;
	int sum; 
	int c;
	int d;
	int fact;
public:
	int summ(){
		cout << "Enter your first number: " << endl;
		cin >> a;
		cout << "Enter your second number: " << endl;
		cin >> b;
		sum = a + b;
		cout << "The sum of your numbers is: " << sum << endl;
		return 0;
	}
	int factor() {
		cout << "Enter your first number: " << endl;
		cin >> c;
		cout << "Enter your second number: " << endl;
		cin >> d;
		fact = c * d;
		cout << "The factor of your numbers is: " << fact << endl;
		return 0;
	}

};
int main()
{
	string x;
	calc ca;
	cout << "summ or factor? " << endl;
	cin >> x;
	if (x == "summ")
	{
		ca.summ();
	}
	else
		ca.factor();
	return 0;
}