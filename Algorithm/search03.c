#include<stdio.h>
main()
{

	int low = 0, high = 10, mid, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96};

	printf("探索値を入力");
	scanf("%d", &s);

	while(low<=high){

		mid = (low + high) / 2;

		if (s == d[mid]) {
			break;
		}

		if (s > d[mid]) {
			low=mid + 1;
		}

		else{
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("\n見つからなかった");
	}
	else{
	printf("\n探索値%dを、d[%d]で発見",s, mid);
	}
}