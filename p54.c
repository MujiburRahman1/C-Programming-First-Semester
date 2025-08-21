main()
{int a[3][2],i,j;
 for(i=0;i<=2;i++)
 {printf("Enter values for %d row\n",i);
  for(j=0;j<=1;j++)
   scanf("%d",&a[i][j]);
 }  
 
 for(i=0;i<=2;i++)
 {
   for(j=0;j<=1;j++)
   printf("%d ",a[i][j]);
   
  printf("\n"); 
 }
 
} 

