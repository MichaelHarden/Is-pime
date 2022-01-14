FILE = Prime

build: $(FILE).c
	gcc -Wall -g $(FILE).c -o $(FILE) -lm
	#gcc -Wall -g $(FILE).c -o $(FILE) -lm

.PHONY: db

db:
	gdb -tui $(FILE)

run:
	./$(FILE)
