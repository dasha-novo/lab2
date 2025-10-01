all: menu
    
menu: index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o index_first_negative.h index_last_negative.h multi_between_negative.h multi_before_and_after_negative.h
    gcc index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o -o menu

multi_between_negative.o: multi_between_negative.c multi_between_negative.h index_first_negative.h index_last_negative.h
    gcc -c index_first_negative.c -o index_first_negative.o

multi_before_and_after_negative.o: multi_before_and_after_negative.c multi_before_and_after_negative.h index_first_negative.h index_last_negative.h
    gcc -c multi_before_and_after_negative.c -o multi_before_and_after_negative.o

index_first_negative.o: index_first_negative.c index_first_negative.h
    gcc -c index_first_negative.c -o index_first_negative.o

index_last_negative.o:  index_last_negative.c  index_last_negative.h
    gcc -c  index_last_negative.c -o  index_last_negative.o
