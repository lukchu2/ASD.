i=int(input()) #liczba zestawów danych
while i>0 :
    l=int(input()) #ilość podanych liczb w zestawie
    a=[]
    a=[int(s) for s in input().split()] # lista w której zawierają się podane po spacji liczby
    j=l-1 # -1 bo ta wartość jest używana w pętli i tak mi bardziej pasowało
    licz=0 #licznik inwersji
    k = 0 #numer na liście liczby sprawdzającej
    while j>=0 :
        m=j
        while m > 0 :
            if a[k]>a[k+m]: # np a[0]>a[0+5] piątka to ilość liczb w zestawie , porównuje jedną liczbą z pozostałymi z listy od prawej strony
                licz=licz+1
            m-=1
        k+=1
        j-=1
    i-=1
    print(licz)

