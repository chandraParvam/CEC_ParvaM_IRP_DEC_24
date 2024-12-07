#include<stdio.h>
// void add2Number(int arg1, int arg2){
//     printf("Sum of %d + %d = %d",arg1,arg2,arg1+arg1);
// }
int add2Number(int arg1, int arg2);
int sub2Number(int arg1, int arg2){
    return arg1-arg2;
}
int main(){
   int val1=10, val2=20, res1,res2;
   // add2Number(val1,val2);
    res1 =  add2Number(val1,val2);
    res2 =  sub2Number(val1,val2);
    printf("Result = %d",res1*res2);
    return 0;
}

int add2Number(int arg1, int arg2){
    return arg1+arg2;
}