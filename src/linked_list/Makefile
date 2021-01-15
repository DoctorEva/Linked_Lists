#lib: all
#	ld *.o -o linked_list.

all: \
	DN_alloc.o 	\
	DN_ends.o 	\
	DN_free.o 	\
	DN_simple.o \
	DN_size.o

%.o: %.c
	gcc -c $(subst .o,.c, $@)
