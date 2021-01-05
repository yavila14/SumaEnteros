#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,suma;
	suma=0;
	for(i=2;i<=100;i=i+2)
	suma=suma+i;
	cout <<suma <<endl;
	return 0;
}
