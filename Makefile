OBJECTS2 = obj2.o sga3.o
OBJECTS3 = obj3.o sga3.o

sga2 : $(OBJECTS2)
	gcc $(OBJECTS2) -o sga2
sga3 : $(OBJECTS3)
	gcc $(OBJECTS3) -o sga3
clean: 
	rm *.o
