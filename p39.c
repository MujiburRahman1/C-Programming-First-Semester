main()
{int i,n, f;
f=1;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
  f= i*f;
  
printf("Factorial of %d = %d",n,f);
}  

