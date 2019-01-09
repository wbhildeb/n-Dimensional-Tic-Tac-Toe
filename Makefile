SHELL = bash
EXEC = tictactoe.out
CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD -Werror=vla 
CCFILES = $(shell find . -name '*.cc')
OBJECTS = ${CCFILES:.cc=.o}
DEPENDS = ${CCFILES:.cc=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${FLAGS} ${OBJECTS} -o ${EXEC}
	echo Hey i ran
	
-include ${DEPENDS}

clean:
	rm -f ${EXEC} ${OBJECTS} ${DEPENDS}