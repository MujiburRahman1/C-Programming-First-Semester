main() {
int a, b, c;
char ch;

printf("Enter two numbers: ");
scanf("%d %d", &a, &b);

printf("Enter +, - or *: ");
 
scanf(" %c", &ch);

if (ch == '+') {
c = a + b;
printf("\n%d %c %d = %d", a, ch, b, c);} 
else if (ch == '-') {
c = a - b;
printf("\n%d %c %d = %d", a, ch, b, c);} 
else if (ch == '*') {
c = a * b;
printf("\n%d %c %d = %d", a, ch, b, c);} 
else {
printf("Invalid operator");
    }

    return 0;
}

