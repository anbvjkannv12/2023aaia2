#include <stdio.h>
int z=100;

void myFunce(){
    int x=20;
    printf("myFunce()裡的x: %d z: %d\n",x,z);
    printf("在離開時，順手把x和z都設成0\n");
    x=0;
    z=0;
}
int main()
{
    int x=10;
    printf("main() 裡的x: %d z: %d\n",x,z);
    myFunce();
    printf("main() 裡的x: %d z: %d\n",x,z);
}
