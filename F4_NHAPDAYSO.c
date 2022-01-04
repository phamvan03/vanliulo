#include <stdio.h>
#define MAX 500

int main() {
	int n, a[MAX], i, dem = 0;
	printf("N = "); scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i); scanf("%d", &a[i]);
		if (a[i] < 0)
			dem++;
	}
	printf("Day A =");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\nSo so am trong A: %d", dem);
	
	return 0;
}
