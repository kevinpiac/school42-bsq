# school42-bsq
Team repository for BSQ (C programming project) at school 42 in Paris.

Architecture of project :

* /project
	* Makefile
	* auteur
	* bsq
	* /library
		* Makefile
		* ft_*.c
		* header.h
		* libft.a
	* /src
		* main.c
		* *.c

The first Makefile can be called using make command with "clean", "fclean" and "re" rules. Its role is to compile all the files located in /src and the libft.a located in library.

The second Makefile (located in library) also can be called using the above rules. Its role is to compile the libft.a using all files located in library.

Note that all functions will include the header.h file that allows us to reference all function's propotypes and other libraries inclusions.

-----------------------------------------------------------------------------------------------

Instructions for PERL GEN :
- These should be enter manually :
	. x : number of lines
	. y : number of char per line
	. difficulty : numbers of obstacle
- while in the main directory execute :
	perl generator.pl x y difficulty | ./bsq
