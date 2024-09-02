SRC = $(wildcard ./src/*.c)													#Functions *.c
TESTS = $(wildcard ./tests/*.c)												#Tests functions *.c
O = $(wildcard ./*.o)														#Object-files
GCNO = $(wildcard ./*.gcno)
GCDA = $(wildcard ./*.gcda)
HTML = $(wildcard ./*.html)

OPT = -Wall -Werror -Wextra
OPT_COV = -Wall -Werror -Wextra --coverage									#Compile options for generate code coverage report
LIB = -lcheck -lm -lpthread -lrt -lsubunit -lgcov							#Include library for build with CHECK
VER = -std=c11																#Version of gcc

RUN_TESTS = check_my_stringh_tests											#Name of executing file

all: run_tests

memory_leaks:																#Build with checking for memory leaks
	gcc $(VER) -g -fsanitize=address $(O) $(LIB) -o $(RUN_TESTS) $(OPT)

clean:																
	rm $(O) $(RUN_TESTS) test

clean_report:
	rm $(GCNO) $(GCDA) $(HTML) coverage_report.css
	make clean

objects:																	#Build object-files
	gcc $(VER) -g -O -c $(SRC) $(TESTS) $(OPT)

build_tests:
	gcc $(VER) $(O) $(LIB) -o $(RUN_TESTS) $(OPT)

run_tests:
	./$(RUN_TESTS)

code_coverage:																#Build object-files with generating code coverage report
	gcc $(VER) -c $(SRC) $(TESTS) $(OPT_COV)

generate_report:															#Generate code coverage report
	gcovr -r . --html --html-details -o coverage_report.html

rebuild_tests:
	make objects
	make build_tests
	make run_tests
	make clean

rebuild_code_coverage:
	make code_coverage
	make build_tests
	make run_tests

rebuild_memory_leaks:
	make objects
	make memory_leaks
	make run_tests
	make clean