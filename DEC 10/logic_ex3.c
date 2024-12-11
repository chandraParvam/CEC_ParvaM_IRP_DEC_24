// get the value or name from user
// eg : RAJA = 4 Even = 
//      0123            = 1A1A
//      ANU = 3 Odd = 
//      012             = A0U
//      SHIVANI =  7  Odd
//      0123456
//                  =S0I0A0I
//      SUHANA  = 6 Even
//      012345      =1U1A1A

//      for(int i=0;i>5;i++){
//         a[i]=i*2;
//      }
#include <stdio.h>
int main(){
    char name[50];
    int count=0;
    printf("Enter your name: ");
    scanf("%s",&name);

    for(int i=0;name[i]!='\0';i++)
      count++;
    if(count%2==0){
        for(int c=0;c<count;c++){
            if(c%2 == 0){
                name[c]='1';
            }
        }

    }else{
        for(int c=0;c<count;c++){
            if(c%2 != 0){
                name[c]='0';
            }
        }
    }
    printf(" The Result = %s",name);

    return 0;
}
