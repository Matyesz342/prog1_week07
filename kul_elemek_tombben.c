#include <stdio.h>

void tomb_kiir(const int tomb[], const int nagysag)
{
    for (int i = 0; i < nagysag; i++)
    {
        if (i==nagysag-1)
        {
            printf("%d\n", tomb[i]);
        }
        else
        {
            printf("%d, ", tomb[i]);
        }

    }

}

int main()
{
    int szam = 0;
    int szamok[] = {};
    int n = 99;
    int j = 0;
    do
    {
        
        printf("Szam: ");
        scanf("%d",&szam);

        if (szam > 0 && szam < 100)
        {
            for (int i = 0; i < sizeof(szamok); i++)
            {
                if (szamok[i] != szam)
                {
                    szamok[i]= szam;
                }
                j++;
                break;
            }
        }    
        else if (szam == 0)
        {
            break;
        }
        else
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
        }
    } while (szam!=0);
    tomb_kiir(szamok,j);

    return 0;
} 