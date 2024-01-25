DEPS= test
compile: main.cpp
	 g++ main.c -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

clean: $(DEPS)
	 rm $(DEPS)
