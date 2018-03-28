#include <stdio.h>
#include <limits.h>

int main(void)
{
int n, l, res;
for(n=1; n<=10; ++n) {
	res=1;
	for(l=1; l<=n; ++l) {
		res*=l;
	}
	printf("%i! = %i\n", n, res);
}

return 0;
}
