FLAGS=-Werror -o

all: helloworld ifelse primitives

helloworld: 0_helloworld.c
	gcc $(FLAGS) helloworld 0_helloworld.c

ifelse: 1_ifelse.c
	gcc $(FLAGS) ifelse 1_ifelse.c

primitives: 3_primitives.c
	gcc $(FLAGS) primitives 3_primitives.c

clean:
	rm -rf helloworld ifelse primitives