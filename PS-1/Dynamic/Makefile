final:
	gcc main.c lib_merge.c lib_search.c lib_sort.c -o final
clear:
	rm *.o
c1:
	gcc -c lib_merge.c lib_search.c lib_sort.c -fpic
c2:
	gcc lib_merge.o lib_search.o lib_sort.o -shared -o lib_dy.so
c3:
	sudo cp lib_dy.so /usr/lib
c4:
	gcc -c main.c -fpic
c5:
	gcc -o main main.o -L. lib_dy.so