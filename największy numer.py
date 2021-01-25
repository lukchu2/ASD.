

l=[]
c=int(input())
i=0
for i in range(c) :
    l1, l2=[x for x in input().split()] #dzieli podaną liczbę i litere na 2 zmienne
    l.append((int(l1), l2)) #dodaje do listy podliste zawierającą 2 elementy: liczbę i litere
l.sort(reverse=True) #sortowanie odwrotne
k=int(input())
for i in range(k):
    print(l[i][1])
