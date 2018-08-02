#include<stdio.h>
#include<stdlib.h>

#define LEN 100000

void gen(float a[]) {
	int i;
	for(i=0;i<LEN;i++)
		a[i] = rand();
}

void prnt(float a[]) {
	int i;
	printf("Print: \n");
	for(i=0;i<LEN;i++)
		printf("%.2f\n", a[i]);
}

int main() {
	int i, j, ch = 0;
	float sw, a[LEN];
	gen(a);
	//prnt(a);

	for(i=0;i<LEN;i++) {
		for(j=0;j<LEN-i-1;j++) {
			if(a[j] > a[j+1]) {
				sw = a[j];
				a[j] = a[j+1];
				a[j+1] = sw;
				ch = 1;
			}
		}
		if(ch == 0)
			break;
		ch = 0;
	}

	//prnt(a);


	return 0;
}
