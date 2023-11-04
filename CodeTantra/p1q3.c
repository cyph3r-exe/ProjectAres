#include <stdio.h>

int main() {
	int i,j,k,l;
	scanf("%d", &i);
	scanf("%d", &j);
	k = i/j;
	l = i%j;
	printf("%d\n",k);
	printf("%d\n",l);
	return 0;
}