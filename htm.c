#include <stdio.h>

int main() {
	asm volatile ("tbegin.; nop; tend.;");
	return 0;
}
