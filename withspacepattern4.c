#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
for(int  row=5;row>=1;row--){
for(int space=1;space<=5-row;space++){
printf(" ");
}
for(int  col=row; col>=1; col--){


if(col%2){
printf("1");
}else{
printf("0");
}
}
printf("\n");
}

getch();
}