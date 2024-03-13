#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day = 4;
switch (day) {
  case 1:
    cout << "Saturday";
    break;
  case 2:
    cout << "Sunday";
    break;
    default:
    cout << "Weekend";
}
	return 0;
}
