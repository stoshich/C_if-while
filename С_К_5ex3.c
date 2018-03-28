#include <stdio.h>
#include <limits.h>

int main(void)
{
int n, trNum;
for(n=5; n<=50; n+=5) {
	trNum = n * ( n + 1 ) / 2;
	printf("Для %i: %i\n", n, trNum);
}


return 0;
}
