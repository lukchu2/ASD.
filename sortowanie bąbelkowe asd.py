n=int(input())
l=[int(x) for x in input().split()]

while n>1 : #wykonuje się n-1 razy
    z= False #zmienna sprawdzająca czy odbyła się jakaś zamiana
    for i in range (len(l)-1) : #wykonuje się o jeden mniej niż ilość zmiennych w liście
        if l[i]>l[i+1] : #jeśli liczba na miejcu i jest większa od liczby na miejscu i+1 przenoszę ją o jeden w prawo
            d=l[i]
            l[i]=l[i+1]
            l[i+1]=d
            z= True
    if z==False : #jeśli nie odbyła się zamiana kończymy program
        break

    n-=1
print(l)