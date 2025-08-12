main()
{int i , n;
printf("Enter a number (n): ");
scanf("%d", &n);
printf("Odd numbers from 1 to %d:\n",n);

for(i=1;i<=n;i++)
	{if(i % 2 != 0)
	printf("%d\n",i);}

}

