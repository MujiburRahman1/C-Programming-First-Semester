main()
{int a,b,c;
char ch;
printf("Enter two nos\n");
scanf("%d %d",&a,&b);
printf("Enter +, - or *\n");
ch=getche();
switch(ch)
{
case '+': c=a+b; printf("\n%d %c %d = %d",a,ch,b,c);break;

case '-': c=a-b; printf("\n%d %c %d = %d",a,ch,b,c);break;

case '*': c=a*b; printf("\n%d %c %d = %d",a,ch,b,c);break;

default: printf("Invalid");

}
}

