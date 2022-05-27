// AUTHOR : VIKRAM SRINIVAS 
// COPYRIGHT  @Vikramsrinivas.me && @Vikramsrinivas.tech
// https://github.com/vikram2009

#include<stdio.h>
#include<math.h>
#define bnum 15;
#define n_bnum -15;
const int myfavnum = 7;
// - to + 
int ntop(int x ){
int y = abs(x);
return y;
}
int xxxx;
int xcv[100];
int  res = 0 ;
//to add nums
void sum(){

    int xxxx;
int xcv[100];
int  res = 0 ;
printf("\nEnter size:");
scanf("%d" , &xxxx);
for(int g = 0 ; g < xxxx ; g++)
{
    printf("\n%d.Enter number:",(g+1));
    scanf("%d",&xcv[g]);
res += xcv[g];

}
printf("Sum: %d",res);

}

void sum_n(int n ){
//to add numbers enter size eg:- sum_n(2); 
int xcv[100];
int  res = 0 ;
for(int g = 0 ; g < n ; g++)
{
    printf("\n%d.Enter number:",(g+1));
    scanf("%d",&xcv[g]);
res += xcv[g];

}
printf("Sum: %d",res);

}