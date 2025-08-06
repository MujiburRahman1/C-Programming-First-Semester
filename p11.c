main()
{
int tm, obm;
float per;
printf("Enter total marks: ");
scanf("%d",&tm);
 printf("Enter Obtaned Marks: ");
 scanf("%d",&obm);
 
per = obm*100.0/tm;

printf("Total Marks=%d\nObtaned Marks=%d\nPercentage=%f",tm,obm,per);
}

