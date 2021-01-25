#include <stdio.h>
#include <stdlib.h>

int dodawanie_zer(int wieksza,int mniejsza,int tw[],int tm[])
{
    int indeks1=wieksza-1; //miejsce na które ma być przeniesione liczba
    int indeks2=mniejsza-1; //miejsce na które ma być przeniesiona liczba
    int i=mniejsza,r=wieksza-mniejsza; // licznik, roznica potrzebna do dopisania zer
    while(i>0)
    {
        tm[indeks1]=tm[indeks2]; // przeżuca z indeks 1 do indeks 2
        i--;
        indeks1--;
        indeks2--;
    }
    for(int j=0;j<r;j++)  //dopisuje zera za miejscu j
    {
            tm[j]=0;
    }



}

int main()
{
    int d,i,dl1,dl2,licz1[10001]={0},licz2[10001]={0};
    int j,l=0,wyn[10001]={0},m,wp=0;
    scanf("%d",&d);
    while(d>0)  //ile jest zestawów danych
    {
        scanf("%d",&dl1); //jak dluga ma byæ pierwsza liczba
        for(i=0;i<dl1;i++)
        {
            scanf("%d",&licz1[i]);  //zbiera liczbê pierwsz¹ do tabeli
        }
        scanf("%d",&dl2);
        for(i=0;i<dl2;i++)
        {
            scanf("%d",&licz2[i]);  //zbiera drug¹ liczbê do tabeli
        }
        if(dl1>dl2)
            dodawanie_zer(dl1,dl2,licz1,licz2); //jeœli d³ugoœæ liczby 1 jest wiêksza ni¿ d³ugoœæ liczby 2 to wysy³a w takiej kolejnoœci
        else
            dodawanie_zer(dl2,dl1,licz2,licz1);


        if(dl1>dl2)
        {
            j=dl1-1;// j jest iteratorem pętli z dodawaniem i za razem długością większej liczby -1
        }
        else
        {
            j=dl2-1;
        }
        l=0;
        //liczby binarne dodaje się od tyłu więc tak puszczam pętle
        // zapisuje ja w tablicy wyniki od konca bo tak łatwiej będzie je rozszeżyć w momencie gdy wynik okaże się dłuższe niż dodawane liczby
        while(j>=0) //pętla która dodaje
        {
            if(licz1[j]+licz2[j]+wp==0) //jeśli suma liczb z obu tabeli +to co w pamięci ==0 to w tabeli wyników wpisuje 0i w pamięci również 0
            {
                wyn[l]=0;
                wp=0;
            }
            else if(licz1[j]+licz2[j]+wp==1)
            {
                wyn[l]=1;
                wp=0;
            }
            else if(licz1[j]+licz2[j]+wp==2)
            {
                wyn[l]=0;
                wp=1;
            }
            else if(licz1[j]+licz2[j]+wp==3)
            {
                wyn[l]=1;
                wp=1;
            }
            l++; // zwieksza indeks miejsca w tabeli wyników
            j--; // zmniejsza indeks miejsca w tabelach w których są dodawane liczby
        }
        if(wp==1) //jeśli po wykonaniu całego dodawania w pamięci została jedynka"1" to znaczy że wynik będzie dłuższy niż dodawane liczby
        {
            wyn[l]=1; // zapisujemy jedynkę którą miejliśmy w pamięci w rezultacie              -||-
            for (i=l;i>=0;i--)
                printf("%d",wyn[i]); // wypisuje tablice od końca bo tak też ją zapisaliśmy,  zaczynamy od l bo wynik jest o 1 dłuższy niż dodawane liczby
        }
        else
    {
        for (i=l-1;i>=0;i--)
            printf("%d",wyn[i]);
            // wypisuje tablice od końca bo tak też ją zapisaliśmy,  zaczynamy od l-1 bo wynik jest o równy długości dłuższej liczby a jak wiemy tablica zaczyna się od 0 a my liczymy od 1 stąd
            //też to l-1
    }

        d--;

    }

    return 0;
}
