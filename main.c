#include <stdio.h>

#include "list.h"

int main() {
 
  
  elem value_remove;
  printf("Tests for linked list implementation\n");
  list_t *newlist = list_alloc();
  list_print(newlist);

  printf("Insert at beginng : 6\n");
  list_add_to_front(newlist,6);
  printf("Insert at beginng : 4\n");
  list_add_to_front(newlist,4);
  list_print(newlist);
  
  printf("Insert at beginng : 2\n");
  list_add_to_front(newlist,2);
  printf("Insert at End : 8\n");
  list_add_to_back(newlist,8);
  printf("Insert at End : 10\n");
  list_add_to_back(newlist,10);
  printf("Insert '7' at Index:3 \n");
  list_add_at_index(newlist,7,3);
  printf("The length of the list is : %d\n",list_length(newlist));
  list_print(newlist);
  printf("--------------------------------------\n");
  
  value_remove = list_remove_from_back(newlist);
  printf("Removing from Back: %d\n", value_remove);
  
  value_remove = list_remove_from_front(newlist);
  printf("Removing from Front: %d\n", value_remove);
  
  value_remove = list_remove_at_index(newlist, 2) ;
  printf("Removing at '%d' Index: 2 \n", value_remove);
  printf("Insert at End : 23\n");
  list_add_to_back(newlist,23);
  printf("Insert at beginng : 17\n");
  list_add_to_front(newlist,17);
  printf("Is 35 in our Linked List? : %d\n", list_is_in(newlist,35));
  printf("Is 8 in our Linked List? : %d\n", list_is_in(newlist,8));  
  printf("The Element in Index 4 is : %d\n", list_get_elem_at(newlist,4));    
  printf("23 is stored in Index : %d\n", list_get_index_of(newlist,23)) ;   
 
  
  list_print(newlist);
  

  

  return 0;
}
