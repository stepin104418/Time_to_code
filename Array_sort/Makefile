SRC = unity/unity.c\
src/array_sort.c\
test/test_array_sort.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = ARRAYSORT.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
