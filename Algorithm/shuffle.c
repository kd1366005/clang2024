#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20],target,work;
	printf("シャッフル前\n\n");
	for (i = 0; i <= 19; i++) {
		data[i]=i + 1;
		printf("data[%d]=%d\n", i,data[i]);
	}

	srand(time(0));
	printf("シャッフル後\n\n");
	for (i = 0; i < 20; i++) {

		target = rand() % 20;

		rand();


		work = data[i];

		data[i] = data[target];

		data[target] = work;

		printf("data[%d]=%d\n",i,data[i]);

	}

}