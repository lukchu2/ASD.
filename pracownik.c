#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,g=0,j,d=0,nr=0,p=0;
    int t[100001]={};
    scanf("%d", &n);
    for(i=0;i<n;i++)//zapisuje wszystkie podane liczby do tablicy
    {
        scanf("%d", &t[i]);
    }
    for(j=0;j<n;j++)//sprawdza ca³¹ tablice po polei od lewej
    {
        if (t[j]==0){
            for(i=0;i<j;i++)//sprawdza tablice od zera do j
            {
                if(t[i]!=0)
                {
                        d++; //za ka¿dym razek gdy liczba jest ró¿na od zera  zwiêksza nr miejsca w tablicy
                }
                if(t[i]>g) // jeœli dana liczba jest wiêksza od poprzedniej
                {
                        g=t[i]; //zapisuje t¹ liczbê jako g
                        nr=d; // pod nr zapisuje d które jest numerem tej liczby
                        p=i; //pod p zapisuje nr miejsca na którym liczba jest w tablicy
                }
            }
            if(g>0)
                printf("%d \n", nr); //je¿eli liczba zapisana pod g jest wiêksza ni¿ 0 to j¹ wypisuje
            if(t[p]!=0)
                t[p]=-1;//wyœwietlon¹ liczbê zmieniam na 0 ¿eby zapobiec ponownemu jej wyœwietleniu
            g=0;
            nr=0;
            d=0;
        }
    }
    return 0;
}
