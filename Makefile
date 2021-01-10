CC =	gcc -c
AR =	ar r
NAME =	libmy.a
MYC =	lib/my/*.c
MYO =	lib/my/*.o
RM =	rm -f
MV =	mv

$(NAME):	$(OBJ)
		$(CC) $(MYC)
		$(MV) *.o lib/my/
		$(AR) lib/$(NAME) $(MYO)


all:	$(NAME)

clean:
	$(RM) $(MYO)

fclean:		clean
	$(RM) lib/$(NAME)

re: fclean all
