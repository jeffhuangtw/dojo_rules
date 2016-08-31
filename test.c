#include <stdio.h>
int f(int i) {
 int j=0;
 switch (i) {
   case 1:
     for (j=0; j<10; j++) {
        printf("case 1: %d %d\n", i, j);
   case 2:
     j++;
        printf("case 2: %d %d\n", i, j);
   case 3:
     j++;
        printf("case 3: %d %d\n", i, j);
   }
   break;
 default:
   break;
 }
 return j;
}

int main() { printf("%d\n", f(3)); }

/*
case 3: 3 1
case 1: 3 2
case 2: 3 3
case 3: 3 4
case 1: 3 5
case 2: 3 6
case 3: 3 7
case 1: 3 8
case 2: 3 9
case 3: 3 10
11
*/

