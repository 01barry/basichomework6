#include <stdio.h>

#include <stdlib.h>

int main(void)

{

int Year;

printf("輸入一個西元年數:");

scanf("%d" , &Year);

if(Year % 400 == 0 )

printf("%d年是閏年\n",Year);  

else if(Year % 100 == 0)

printf("%d年是平年\n",Year);

else if(Year % 4 == 0)

printf("%d年是閏年\n",Year);

else

printf("%d年是平年\n",Year);

    system("pause");

    return 0; 

}
