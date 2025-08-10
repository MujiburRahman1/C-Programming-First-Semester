main()
{char ch;
ch=getche();
if(ch>='a' && ch<='z')
{
 ch=ch - 32;
 printf("\nch=%c",ch);
 }
else 
if(ch>='A' && ch<='Z')
{
 ch=ch + 32;
 printf("\nch=%c",ch);
 }
} 
 
 

