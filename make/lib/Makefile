OBJECTS = divide.o add.o subtract.o multiply.o
libshared.so.1.0.1 : $(OBJECTS)
	gcc -shared -Wl,-soname,libshared.so.1 -o libshared.so.1.0.1 $^
	ln -s libshared.so.1.0.1 libshared.so.1
	ln -s libshared.so.1.0.1 libshared.so
divi.o : divide.c
	gcc -c -fPIC $<
add.o : add.c
	gcc -c $<
sub.o : subtract.c
	gcc -c $<
mult.o : multiply.c
	gcc -c $<
clean :
	rm -f libshared.so.1.0.1 libshared.so.1 libshared.so staticlib.a $(OBJECTS) 
