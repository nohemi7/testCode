#Makefile for Lecture 2
#Author(s): Nohemi Morales

#recall ${} is used to indicate vars
# $@ -target
# $^ - dependencies
CXX:g++ -std=c++ -g
dependencies=main.o

main: ${dependencies}
	${CXX} -o $@ $^

clean:
	rm -f *.o main
