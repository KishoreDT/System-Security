final:
	gcc main.c lib_copy.c lib_count.c lib_occ.c -o final
clear:
	rm *.o
c1:
	gcc -c lib_copy.c lib_count.c lib_occ.c lib_append.c -fpic
c2:
	ar rcs lib_st.a lib_copy.o lib_count.o lib_occ.o lib_append.o
c3:
	gcc -c main.c -fpic
c4:
	gcc -o main main.o -L. lib_st.a