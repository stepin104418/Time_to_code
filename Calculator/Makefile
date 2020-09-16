SRC = unity/unity.c\
src/calculator.c\
test/test_calculator.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = calculator.out

# Output directory
BUILD = build

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out



run:$(PROJECT_NAME)
	./${PROJECT_NAME}
	
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
