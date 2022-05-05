#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int number = 0;
    if(number >= 1 || number <= 10)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }*/

    /*char ch;
    scanf("%c", &ch);
    if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
    {
        printf("this is voule\n");
    }
    else
    {
        printf("this is consocent\n");
    }*/

    /*int n = 1;
    while(n <= 10)
    {
        printf("%d\n",n);
        n++;
    }*/


    /*int n = 1;
     while(n <= 100)
     {
         printf("%d\n",n);
         n++;
         if(n > 19)
         {
             break;
         }
     }*/


    /*int n = 0;
    while (n<10)
    {
        n++;
        if(n%2 == 0){
            continue;

        }
         printf("%d\n",n);

    }*/


    /*int n = 120, i = 1;
    while(i <= 10)
    {
        printf("%d*%d = %d\n",n, i, n*i);
        i++;
    }*/

    /* int n , i=1;
    scanf("%d",&n);
    for(; i<=10; i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }*/


    /*int m, n=5, i;
    for(i=1; i<=10; i++)
    {
       m = m+n;
        printf("%d*%d = %d\n",n,i,m);
    }
    */

    /*int i,n;
    for(n=1; n<=20; n++)
    {
        printf("\n");
        for(i=1; i<=10; i++)
        {
            printf("%d*%d = %d\n",n,i,n*i);
        }
    }*/

    /*int a, b, c;
    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            for(c=1; c<=3; c++)

                printf("%d %d %d\n",a,b,c);
        }
    }*/

    /*int a,b,c;

    for(a=1; a <= 3; a++)
    {
        for(b=1; b <=3 && b != a ; b++)
        {
            for(c=1; c <= 3 && c !=a && c != b; c++)
            {
                printf("%d %d %d",a,b,c);

            }

        }
    }*/

    int a, b, c;
    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            if(b != a)
            {
                for(c=1; c<=3; c++)
                {
                    if(c != b && c!=a)
                    {
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
    }

    return 0;
}
