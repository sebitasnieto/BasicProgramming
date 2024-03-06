#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//outer loop
	for (int i = 1; i <=2; ++i){
		cout << "Outer: "<< i <<"\n"; // Executes 2 times	
	// Inner loop
    for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
  }
	return 0;
}
