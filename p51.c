main()
{int a[4],i,max,index;

for(i=0;i<=3;i++)
 scanf("%d",&a[i]);
 
max=a[0];
index=0;
for(i=1;i<=3;i++)
 if(a[i]>max)
 {
  max=a[i];
  index=i;
 }
  
printf("Max = %d at index=%d",max,index);
}   

