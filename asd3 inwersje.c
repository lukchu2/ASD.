#include <stdio.h>
#include <stdlib.h>

int main()
{
 // program sprawdza ile razy zachodzi inwersja polegaj�ca na tym �e liczba x>y  i warto�� x<y

    int i, k, j,g, p, inw;
    int t[10000];
    scanf("%d",&i);
    while(i--) // wykonuje si� podan� w i liczb� razy
    {
        inw=0;  //licznik inwersji, zerowany przy ka�dym nowym zestawie danych
        scanf("%d",&p);  //ilo�� liczb w danym zestawie
        for(j=0;j<p;j++) //wykonuje si� o 1 mniej ni� p bo zapisuje w tablicy w kt�rej pierwsze miejsce jest zerem
        {
            scanf("%d",&t[j]); // zapisuje podane po spoacji liczby
        }

        for(g=0;g<p;g++) //b�dzie ona iteratorem liczby sprawdzaj�cej
        {
            for(j=g;j<p;j++) // iterator liczby sprawdzanej
            {
                if(t[g]>t[j]) // je�li liczba sprawdzaj�ca jest wi�ksza ni� sprawdzana kt�ra jest od niej dalej w tablicy to zachodzi inwersja
                    inw++;
            }
        }
            printf("%d\n",inw);
    }
    return 0;


}
