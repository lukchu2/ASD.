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
    for(j=0;j<n;j++)//sprawdza ca�� tablice po polei od lewej
    {
        if (t[j]==0){
            for(i=0;i<j;i++)//sprawdza tablice od zera do j
            {
                if(t[i]!=0)
                {
                        d++; //za ka�dym razek gdy liczba jest r�na od zera  zwi�ksza nr miejsca w tablicy
                }
                if(t[i]>g) // je�li dana liczba jest wi�ksza od poprzedniej
                {
                        g=t[i]; //zapisuje t� liczb� jako g
                        nr=d; // pod nr zapisuje d kt�re jest numerem tej liczby
                        p=i; //pod p zapisuje nr miejsca na kt�rym liczba jest w tablicy
                }
            }
            if(g>0)
                printf("%d \n", nr); //je�eli liczba zapisana pod g jest wi�ksza ni� 0 to j� wypisuje
            if(t[p]!=0)
                t[p]=-1;//wy�wietlon� liczb� zmieniam na 0 �eby zapobiec ponownemu jej wy�wietleniu
            g=0;
            nr=0;
            d=0;
        }
    }
    return 0;
}
