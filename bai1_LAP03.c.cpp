#include<stdio.h>

int main(){

int s, m = 3, n = 5, r,t;
float x =3.0,y;

	t = n/m;
	printf("gia tri bieu thuc t: %d \n",n/m);
	
	r = n%m;
	printf("gia tri bieu thuc r: %d \n",n%m);
	
	y = n/m;
	printf("gia tri cua bieu thuc y: %d\n",n/m);
	
	t =x*y-m/2;
	printf("gia tri cua bieu thuc t =x*y-m/2: %d\n",t);
	
	x = x*2.0;
	printf("gia tri cua bieu thuc x =x*2.0 : %f\n",x);
	
	s = (m+n)/r;
	printf("gia tri cua bieu thuc s = (m+n)/r : %d\n ",s);
	
	y = --n;
	printf("gia tri cua bieu thuc y= --n: %d\n",y);
	
return 0;
}

