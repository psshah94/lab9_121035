#include<stdio.h>
int main()
{

	int n,avgw=0,avgt=0;
	printf("Enter number of processes");
	scanf("%d",&n);

	int b[n],w[n],t[n];
	printf("Enter burst time of processes");
	for(i=;i<n;i++)
	{

		scanf("%d",&b[i]);

	}
	for(i=0;i<n;i++)
	{

		w[i]=0;

	}
	for(i=1;i<n;i++)
	{

		for(j=0;j<i;j++)
		{

			w[i]+=b[j];

		}

	}
	for(i=0;i<n;i++)
	{

		t[i]=b[i]+w[i];

	}

	for(i=0;i<n;i++)
	{

		avgw+=w[i];
		avgt+=t[i];

	}
	avgw=avgw/n;
	avgt=avgt/n;

	printf("Average waiting time=%d",avgw);
	printf("Average turnaround time=%d",avgt);

}