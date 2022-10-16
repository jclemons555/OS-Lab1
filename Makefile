# list/Makefile
#
# Makefile for list implementation and test file.
#
# Joshua Clemons
list: main.c
	gcc main.c list.c -o list.exe
