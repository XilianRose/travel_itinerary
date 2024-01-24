
#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H

#include <stdlib.h>

typedef struct list
{
	list	*previous;
	void	*content;
	list	*next;
}	list;

void	lstclear(list **head);
void	lstadd_back(list **head, list *new);
void	lstadd_front(list **head, list *new);
list	*lstlast(list *lst);
list	*lstnew_node(void *content);

#endif
