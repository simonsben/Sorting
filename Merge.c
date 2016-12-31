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

int big(int a, int b) {
    if(a > b)
        return a;
    else 
        return b;
}

int small(int a, int b) {
    if(a < b)
        return a;
    else 
        return b;
}

void merge(float a[], int b1, int b2, int e1, int e2)  {
    int i;
    for(i=;i<big(e1-b1, e2-b2);i++) {

    }
}

int main() {
    float a[LEN];

    return 0;
}