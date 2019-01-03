#include<stdio.h>
#include<conio.h>

main()
{
    int a, s[5]={},c[5];
    printf("Array A\n");
    printf("1 2 3 4 5 \n");
    for(a=0;a<5;a++)
{
scanf("%i",&s[a]);
}
for(a=0;a<5;a++)
{
    c[a]=s[a];
}
printf("\n");
printf("Array B\n");
for(a=0;a<5;a++)
{
printf("%2i",c[a]);
scanf("%d",&a);
if(a%2==0);
{
    printf("%d adalah bilangan genap\n\n",a);

}
}
return 0;
}
