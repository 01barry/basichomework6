#include <stdio.h>

#include <stdlib.h>

int main(void)

{

int Year;

printf("��J�@�Ӧ褸�~��:");

scanf("%d" , &Year);

if(Year % 400 == 0 )

printf("%d�~�O�|�~\n",Year);  

else if(Year % 100 == 0)

printf("%d�~�O���~\n",Year);

else if(Year % 4 == 0)

printf("%d�~�O�|�~\n",Year);

else

printf("%d�~�O���~\n",Year);

    system("pause");

    return 0; 

}
