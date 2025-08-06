main()
{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

if (a > b) 
{
printf("The greater number is: %d\n", a);} 
else if (b > a) 
{
printf("The greater number is: %d\n", b);} 
else {
printf("Both numbers are equal.\n");
}

}

