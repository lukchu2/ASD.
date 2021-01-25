a=int(input())
b=[int(x) for x in input().split()] #zapisuje podane liczby do listy
i=a-1 # bo lista zaczyna się od zera
n=b[i] #liczba od któej zaczynamy sprawdzanie największej
while i>=0 :
    if(n<b[i-1]) : # jeśli liczba na miejscu o jeden w lewo jest większa od największej to:
        n=b[i-1] # zapisujemy tą liczbę jako największą
    i-=1
print(n)