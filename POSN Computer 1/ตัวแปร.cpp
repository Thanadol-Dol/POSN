#include<stdio.h>
#include<math.h>
main()
{
	int num =9;
	double fnum =-3.141593;
	long lnum =-155455828;
	printf("%d %d\n",num,abs(num));
	printf("%f %f\n",fnum,fabs(fnum));
	printf("%ld %ld\n",lnum,labs(lnum));
}
