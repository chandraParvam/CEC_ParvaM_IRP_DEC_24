/*
n=5
*                   1                  1
* *                 1 2                2 2
* * *               1 2 3              3 3 3
* * * *             1 2 3 4            4 4 4 4
* * * * *           1 2 3 4 5          5 5 5 5 5

    *                 
   * *
  * * * 
 * * * *
* * * * * 
00001
0001 1
001 1 1
01 1 1 1
parent for loop  second loop   third loop
1                  n-1 4  5-1          1
2                      3  5-2      2
3                      2  5-3      3
4                      1  5-4      4
5                                  5
* * * * *
* * * *
* * *
* *
*
5 5 5 5 5
4 4 4 4 
3 3 3 
2 2 
1


    1                 
   0 1
  0 1 0 
 1 0 1 0
1 0 1 0 1 



00001
0001 1
001 1 1
01 1 1 1
parent for loop  second loop   third loop
1                  n-1 4  5-1          1
2                      3  5-2      2
3                      2  5-3      3
4                      1  5-4      4
5                                  5
* * * * *
* * * *
* * *
* *
*
5 5 5 5 5
4 4 4 4 
3 3 3 
2 2 
1

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
* * *

* * *
*/
#include<stdio.h>
int main(){

for(int j=1;j<=5;j++){
    for ( int i =1; i <= j ; i++){
        printf("* ");
    }
    printf("\n"); 
}
printf("\n -------------------------- \n\n"); 
for(int j=5;j>=1;j--){
    for ( int i =1; i <= j ; i++){
        printf("* ");
    }
    printf("\n"); 
}

printf("\n -------------------------- \n\n"); 
int n=5;
for(int j=1;j<=n;j++){
    for ( int k=1; k<=n-j ; k++){ // 4 4>=1 
        printf(" ");
    }
    for ( int i =1; i <= j ; i++){
        printf("* ");
    }
    printf("\n"); 
}
return 0;
}