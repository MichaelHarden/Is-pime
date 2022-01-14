FILE = Prime

build: $(FILE).c
	gcc $(FILE).c -o $(FILE)

run:
	./$(FILE)
