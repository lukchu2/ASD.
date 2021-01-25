#include <stdio.h>
#include <stdlib.h>

int main()
{
    //sortowanie bąbelkowe polega na sprawdzaniu czy liczba jest większa od następnej i jeśli tak to przesówaniu jej w prawo i tak z każdą liczbą aż wartości nie będą posortowane
    int n, l[1000],i, z, d,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&l[i]);
    j=n;
    while (j>1) //wykonuje siê n-1 razy
        {
            //z=0; //zmienna sprawdzaj¹ca czy odby³a siê jakaœ zamiana
            for (i=0;i<n;i++)//wykonuje siê o jeden mniej ni¿ iloœæ zmiennych w liœcie
            {
                if(l[i]>l[i+1])//jeœli liczba na miejcu i jest wiêksza od liczby na miejscu i+1 przenoszê j¹ o jeden w prawo
                {
                    d=l[i];
                    l[i]=l[i+1];
                    l[i+1]=d;
                    z=1;
                }
            }

            j--;
        }
    for(i=0;i<n;i++)
        printf("%d ",l[i]);
}


 //if (z==0) //jeœli nie odby³a siê zamiana koñczymy program
                //break;
