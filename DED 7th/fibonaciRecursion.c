// 0 1 1 2 3 5 8 = 10 10 > sum
// fib = 0 + 1 = 1
// fib = 1 + 1 = 2
// fib = 1 + 2 = 3
// fib = 2 + 3 = 5
// fib = 3 + 5 = 8
// fib = 5 + 8 = 11
// 0 = 0
// 1 = 1
//  2       2-1 2-2 = 1 + 0 = 1
//  3       3-1 3-2 = 2 + 1 = 3
//  4       4-1 4-2 = 3 + 2 = 
//  5       5-1 5-2 = 4 + 3 =
//  6       6-1 6-2 = 5 + 4 = 

// n = 5
//                                 5
//                 5-1(4)                            5-2(3) 
//           4-1(3)          4-2(2)             3-1(2)      3-2(1)
//     3-1(2)    3-2(1)   2-1(1) 2-2(0)       2-1(1) 2-2(0)
// 2-1(1) 2-2(0)



        //     4            3
        // return findFib(n-1)+findFib(n-2);   3 + 2 = 5
        //           findFib(4)          +         findFib(3)
        //         4-1              4-2
        //     findFib(3)     +   findFib(2) = 2 + 1 = 3
        //         3-1  3-2
        //      findFib(2)   + findFib(1) =  1 + 1 = 2
        //       2-1 2-2
        //       findFib(1) +  findFib(0) = 1 + 0 = 1





#include<stdio.h>
int fib(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    for(int i=0; i < 10; i++)  
    {
       printf("%d ", fib(i));
    }
    return 0;
}










