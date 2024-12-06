// ex1 : 456 = 4 + 5 + 6 = 15
// ex2 : 123 = 1 + 2 + 3 = 6

// 10)456(45
//     40
//     --------
//     56
//     50
//     --------
//     6

// 10) 45(4
//     40
//     -----------
//     5    

// 10) 4(0
//     4

/*
num = 456
rem = num%10  // 456%10 = 6
sum=sum +rem // sum = 0+ 6 = 6
num = num/10 // num = 456/10 = 45

num = 45
rem = num%10  // 45%10 = 5
sum=sum +rem // sum = 6 + 5 = 11
num = num/10 // num = 45/10 = 4

num = 4
rem = num%10  // 4%10 = 4
sum=sum +rem // sum =11 + 4 = 15
num = num/10 // num = 4/10 = 0
*/
#include<stdio.h>
int main(){
   int num, sum=0,rem=0;
   printf("Enter the number to get sum of digits:");
   scanf("%d",&num);

    while(num > 0){
        rem = num%10; // 456%10 = 6
        sum=sum + rem; // sum = 0+ 6 = 6
        num = num/10;
    }
    printf("Sum of Digits = %d",sum);
    return 0;
}
