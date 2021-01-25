#include <stdio.h>
#include <stdlib.h>

int main()
{
 // program sprawdza ile razy zachodzi inwersja polegaj¹ca na tym ¿e liczba x>y  i wartoœæ x<y

    int i, k, j,g, p, inw;
    int t[10000];
    scanf("%d",&i);
    while(i--) // wykonuje siê podan¹ w i liczbê razy
    {
        inw=0;  //licznik inwersji, zerowany przy ka¿dym nowym zestawie danych
        scanf("%d",&p);  //iloœæ liczb w danym zestawie
        for(j=0;j<p;j++) //wykonuje siê o 1 mniej ni¿ p bo zapisuje w tablicy w której pierwsze miejsce jest zerem
        {
            scanf("%d",&t[j]); // zapisuje podane po spoacji liczby
        }

        for(g=0;g<p;g++) //bêdzie ona iteratorem liczby sprawdzaj¹cej
        {
            for(j=g;j<p;j++) // iterator liczby sprawdzanej
            {
                if(t[g]>t[j]) // jeœli liczba sprawdzaj¹ca jest wiêksza ni¿ sprawdzana która jest od niej dalej w tablicy to zachodzi inwersja
                    inw++;
            }
        }
            printf("%d\n",inw);
    }
    return 0;


}
