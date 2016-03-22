LAB2: BMI.o main.o
	g++ -o LAB2 main.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main.o: main.cpp BMI.h
	g++ -c main.cpp

clean:
	rm LAB2 *.o
