b=""#zmienna potrzebna do łączenia
a=input()
a=list(a) #trzeba zmienić typ zmiennej na liste żeby można było zastosować reverse
a.reverse()     #odwraca zmienną a
print(b.join(a))    #łączy a za pomocą b="" i je wyświetla