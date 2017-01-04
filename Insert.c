#include<stdio.h>
#include<stdlib.h>

#define LEN 100000

void gen(float a[]) {
	int i;
	for(i=0;i<LEN;i++)
		a[i] = rand() % 10;
}

void prnt(float a[]) {
	int i;
	printf("Print: \n");
	for(i=0;i<LEN;i++)
		printf("%.2f\n", a[i]);
}

void swap(float a[], int b, int c)  {
    float sw = a[b];
    a[b] = a[c];
    a[c] = sw;
}

int main() {
    int i, j;
    float a[LEN], sw;

    gen(a);
    //prnt(a);
    
    for(i=1;i<LEN;i++) {
        for(j=i;j>0;j--) {
            if(a[j] < a[j-1])
                swap(a, j, j-1);
            else 
                break;
        }
    }

    //prnt(a);

    return 0;
}