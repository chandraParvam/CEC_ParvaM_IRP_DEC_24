// 0 1 1 2 3 5 8 = 10 10 > sum
// a = 0
// pre or b = 1
// pre or sum = a + b  =  1
// pre or  sum  = pre + sum = 1 +1 = 2
// pre sum  =  pre + sum = 1 + 2 = 3 
// sum  =  pre + sum = 2 + 3 = 5 

// a = 10 , b= 20 
// temp = a // temp = 10
// a = b    // a = 20
// b = temp // b = 10

// a= 0 , b = 1


// fib  = a + b = 0 + 1  = 1
// b = b + fib = 1 + 1 = 2
// a = fib  = 1

// fib  = a + b = 1 + 2  = 3
// b = b + fib = 2 + 3 = 5
// a = fib  = 3

// fib  = a + b = 3 + 5  = 8
// a = b + fib = 3 + 8 = 11
// a = fib  = 8

// 10 > 11 10 >b

#include<stdio.h>
int main()
{
    int n1 =0, n2 = 1, fib=0;
    for(int i=1; i <= 10; i++)  
    {
        if (i == 1){               
            printf(" %d", n1);        // 0 1
        }else if (i == 2) {
            printf(" %d", n2);
        }else{
                
                fib = n1 + n2;           // feb = 0 + 1 = 1  | fib = 1 + 1 = 2 | fib = 1 + 2= 3
                n1 = n2;                 // n1 = 1           |  n1 = 1         |  n1 = 2
                n2 = fib;                // n2 = 1           |  n2 = 2         |  n2 = 3
                printf(" %d", fib);
        }
        
    }
   
    return 0;
}


fib = 0 + 1 = 1
fib = 1 + 1 = 2
fib = 1 + 2 = 3
fib = 2 + 3 = 5
fib = 3 + 5 = 8
fib = 5 + 8 = 11
0 = 0
1 = 1
 2       2-1 2-2 = 1 + 0 = 1
 3       3-1 3-2 = 2 + 1 = 3
 4       4-1 4-2 = 3 + 2 = 
 5       5-1 5-2 = 4 + 3 =
 6       6-1 6-2 = 5 + 4 = 

n = 5
                                5
                5-1(4)                            5-2(3) 
          4-1(3)          4-2(2)             3-1(2)      3-2(1)
    3-1(2)    3-2(1)   2-1(1) 2-2(0)       2-1(1) 2-2(0)
2-1(1) 2-2(0)


func findFib(int n){ // n = 5
    if(n == 0 || n == 1)
        return n;
    else                4            3
        return findFib(n-1)+findFib(n-2);   3 + 2 = 5
                  findFib(4)          +         findFib(3)
                4-1              4-2
            findFib(3)     +   findFib(2) = 2 + 1 = 3
                3-1  3-2
             findFib(2)   + findFib(1) =  1 + 1 = 2
              2-1 2-2
              findFib(1) +  findFib(0) = 1 + 0 = 1

}








