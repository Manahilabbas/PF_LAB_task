/*Task 2: Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);
such that;
b ----&gt; temp
a ----&gt; b
c ----&gt; a
temp -&gt; a*/
#include <stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);
int main(){
    int a=1,b=2,c=3;
    int *aptr=&a;
   int*bptr=&b;
    int*cptr=&c;
printf("%d %d %d\n",a,b,c);
    swaped(aptr,bptr,cptr);
    printf("%d %d %d\n",a,b,c);
    

    return 0;
}
void swaped(int *aPtr, int *bPtr, int *cPtr){
    int temp;
    temp=*aPtr;
    *aPtr=*bPtr;
    *bPtr=*cPtr;
    *cPtr=temp;
}