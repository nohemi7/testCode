
#Makefile
#Author(s): Nohemi Morales

#Makefiles are a way to run and debug your code in an organized manner 
#They consist of rules that go from executable to object files (from top down) and lastly clean rule

#General Format: 
#[target]: [dependencies]
	#[commands]

#Commands:
# -c : compiles only (into object files)
# -o : compliles and links (into exectutable)
# -g : allows debugging capabilities

#Shortcuts:
# $@ - target
# $^ - dependencies 

#Binaries: (from lab 1--like executable names)
#[target]: [binaries]
	#./binary1
	#./binary2
	#./binaryN
#Use because instead of cleaning all executables, you use ${binaries} and call it a day

#Use variables
	#CXX and CXXFLAG have special power in c++

#Variables- use for changability of your code
CXX=g++ -std=c++11 -g
dependencies=functions.o main.o

main: ${dependencies}
	${CXX} -o $@ $^

#These are not needed, because c++ is smart enough to make the dependencies that you need
 #but it is good to know that this is what the compiler is actually doing


#functions.o: functions.cpp
#	${CXX} -c functions.cpp

#main.o: main.cpp
#	${CXX} -c main.cpp

clean:
	rm -f *.o main