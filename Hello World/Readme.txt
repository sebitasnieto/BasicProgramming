
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=10;
	int b=10;
	if (a> b) {
		cout << a <<" is greater than "<<b<<endl;
	}	
	else if (a<b) {
		cout<<a<<" is less than "<<b;
	}
	else {
		cout <<a<< " is not greater or less than "<<b<<endl;
	}
	return 0;
}
