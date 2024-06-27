#include<stdio.h>
main()
{

	int low = 0, high = 10, mid, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96};

	printf("’Tõ’l‚ğ“ü—Í");
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
		printf("\nŒ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else{
	printf("\n’Tõ’l%d‚ğAd[%d]‚Å”­Œ©",s, mid);
	}
}