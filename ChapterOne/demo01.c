#include <stdio.h>
int main() {
	// incompatible integer to pointer conversion assigning to 'int *' from 'int';
	int num; 
	int*  pi = &num;
	num = 0;
	pi = num;
}