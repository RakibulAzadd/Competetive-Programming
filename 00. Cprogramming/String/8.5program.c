#include<stdio.h>
int main()
{

    char con[15]="United Kingdom";
    printf("%15s\n",con);
    printf("%5s\n",con);
    printf("%15.0s\n",con);
    printf("%15.6s\n",con);
    printf("%-15.6s\n",con);
    printf("%.6s\n",con);
    printf("%.3s\n",con);
}
