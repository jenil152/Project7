#include<stdio.h>

  j(int num[])
  {
  	int i,sum=0;
  	for(i=0;i<=5;i++)
  	{
  		sum=sum+num[i];
    }
    num=num+sum;
    printf("sum=%d\n",sum);
  }
main()
{
	int sum[]={45,85,69,98,92,98};

	j(sum);

}
