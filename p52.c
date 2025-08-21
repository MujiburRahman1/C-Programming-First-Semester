main()
{ int a[4], i, Sum;
Sum = 0;
for(i = 0; i <= 3; i++){
	scanf("%d",&a[i]);
}
for(i = 0; i <= 3; i++) {
Sum += a[i];
}
printf("Sum = %d\n", Sum);
}

