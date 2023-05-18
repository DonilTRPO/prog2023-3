#include <stdio.h>

int main()
{
	printf("%x\n", (0x12345 & 0x5678) | (0xfeac << 1));
}
