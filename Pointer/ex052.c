#include<stdio.h>
main()
{
	int a,b,c;
	int *p_a,*p_b;

	a = 100;
	b = 200;
	
	printf("é¿çsëO:a=%d	b=%d", a, b);

	p_a = &a;
	p_b = &b;

	c = *p_a;
	*p_a = *p_b;
	*p_b = c;

	printf("\né¿çså„:a=%d	b=%d", a, b);
}