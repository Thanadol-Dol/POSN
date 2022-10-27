#include<stdio.h>
#include<math.h>
main()
{
	int a,i,j,absi,absj;
	scanf("%d",&a);
	for(i=0;i<a*2;i++){
		for(j=0;j<(a*2)+1;j++){
			/*if(i==0||i==(a*2)||j==(a*2)||j==0){
				printf("0");
			}
			else if(i==1||i==(a*2)-1||j==(a*2)-1||j==1)
			{
				printf("1");
			}
			else if(i==2||i==(a*2)-2||j==(a*2)-2||j==2)
			{
				printf("2");
			}
			else if(i==3||i==(a*2)-3||j==(a*2)-3||j==3)
			{
				printf("3");
			}
			else if(i==4||i==(a*2)-4||j==(a*2)-4||j==4)
			{
				printf("4");
			}
			else if(i==5||i==(a*2)-5||j==(a*2)-5||j==5)
			{
				printf("5");
			}
			else if(i==6||i==(a*2)-6||j==(a*2)-6||j==6)
			{
				printf("6");
			}
			else if(i==7||i==(a*2)-7||j==(a*2)-7||j==7)
			{
				printf("7");
			}
			else if(i==8||i==(a*2)-8||j==(a*2)-8||j==8)
			{
				printf("8");
			}
			else if(i==9||i==(a*2)-9||j==(a*2)-9||j==9)
			{
				printf("9");
			}
			else{
				printf(" ");
			}*/
			absi=a-abs(a-i);
			absj=a-abs(a-j);
			if(absi<absj)
				printf("%d",absi%10);
			else
				printf("%d",absj%10);
		}
		printf("\n");
	}
}
