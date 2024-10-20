$(CC) = gcc

final: main.o insert_at_first.o insert_at_last.o delete_first.o delete_last.o delete_list.o find_node.o print_slist.o  
	   $(CC) main.o insert_at_first.o insert_at_last.o delete_first.o delete_last.o delete_list.o find_node.o print_slist.o -o final
	   
main.o : main.c main.h
		 $(CC) -c main.c

insert_at_first.o : insert_at_first.c main.h
					$(CC) -c insert_at_first.c
					
insert_at_last.o : insert_at_last.c main.h
				   $(CC) -c insert_at_last.c
					
delete_first.o : delete_first.c main.h
				$(CC) -c delete_first.c
					
delete_last.o : delete_last.c main.h
				$(CC) -c delete_last.c

delete_list.o : delete_list.c main.h
				$(CC) -c delete_list.c

find_node.c   : find_node.c main.h
				$(CC) -c find_node.c	

print_slist.c  : print_slist.c main.h 
				 $(CC) -c print_slist.c		

clean   : rm *.o final		
		
		