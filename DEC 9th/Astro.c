// you are kind
// you are arrogant
// you are Honest
// you are Fake
// you are Bad
// you are Good
// you are Mental
// you are psycho
// you are Humble
// you are Generous

// A to Z 
// A=1
// a=1

// z or Z = 26
// ANU = 1 + 14 + 21 = 36 =  3+6 = 9   567 = 5+6+7 = 18 = 1+8 = 9
//sod = num = 567 // 18 >= 9
// while(sod > 9){
//     sum = 0;
//     while(num > 0){
//         rem = num%10
//         sum = sum + rem; //18 //9 
//         num = num/10;
//     }
//     sod = sum
// }




// A = a = 1
// B = b = 2
// C = c = 3


#include<stdio.h>
int main(){
   char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char alphaLow[]="abcdefghijklmnopqrstuvwxyz";
   char name[100];
   int sum=0,astroChoice=0,sod;
   printf("Please Enter your name : \n");
   scanf("%s",&name);
  
    for(int c=0;name[c] != '\0';c++){
           for(int i=0;i<26;i++)
                 if(name[c] == alphaUpr[i] || name[c] == alphaLow[i] ){
                      printf(" %c + ",name[c]);
                    sum += i+1; //sum = sum + i+1

                 }
    }
    printf(" = %d \n",sum);
    astroChoice = sum;
    while(astroChoice > 9){
        sod = 0;
        while(astroChoice > 0){
        sod += astroChoice%10;
        astroChoice/=10;
        }
     astroChoice = sod;
    }
    printf("Astro choice value = %d\n",astroChoice);
    switch(astroChoice){
        case 1:printf(" you are arrogant\n");break;
        case 2:printf("you are kind\n");break;
        case 3:printf(" you are Honest\n");break;
        case 4:printf(" you are Fake\n");break;
        case 5:printf(" you are Bad\n");break;
        case 6:printf(" you are Good\n");break;
        case 7:printf(" you are Mental\n");break;
        case 8:printf(" you are psycho\n");break;
        case 9:printf(" you are Humble\n");break;
        default:printf(" Wrong Choice\n");
    }

    return 0;
}
