#include <stdio.h>

int main() {
	int i,j;
	scanf("%d", &i);
	j = i*(i+1)*(((2*i)+1))/6;
	printf("%d",j);
	return 0;
}