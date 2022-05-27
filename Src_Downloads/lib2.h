// AUTHOR : VIKRAM SRINIVAS 
// COPYRIGHT  @Vikramsrinivas.me && @Vikramsrinivas.tech
// https://github.com/vikram2009


#include<stdio.h>
#define TEEN_MIN_AGE 13;
#define TEEN_MAX_AGE 18;


char name[100];
int age ;

void askAge(){
scanf("%d" , &age);    
}
int getAge(){
    printf("%d",age);
}
void askName(){
    scanf("%s",name);
}


char getName(){
   printf("%s",name);
}


//return types
int RgetAge(){
    return age;
}

char *RgetName(){
   return name;
   }
   


   void checkTeen(){
       int y = 0 ; 
       printf("\nEnter Ur Age : ");
       scanf("%d",&y );

     if(y >= TEEN_MIN_AGE && y<=TEEN_MAX_AGE ){
         printf("\nHEY! TEEN");
     }  else if (y >= 19 ){
printf("\nHEY! FORMER TEEN");
     }else{
         printf("\nHEY! Kid");
     }

   }