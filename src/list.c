#include "linked_lists.h"

/**
 * @brief Deletes and frees every node of the list pointed to by 'head', using free(3).
 * Finally, 'head' is set to NULL
 *
 * @param head A pointer to the head of the list.
 */
void	lstclear(list **head)
{
	list	*temp;
	list	*next;

	if (!head)
		return ;
	while (*head)
	{
		temp = *head;
		next = temp->next;
		free(temp->content);
		temp->content = NULL;
		free(temp);
		temp = NULL;
		*head = next;
	}
	*head = NULL;
}

/**
 * @brief Adds the node 'new' at the end of the list.
 *
 * @param head A pointer to the head of the list.
 * @param new The node to be added to the list.
 */
void	lstadd_back(list **head, list *new)
{
	list	*last;

	if (!new)
		return ;
	last = lstlast(*head);
	if (last == NULL)
		lstadd_front(head, new);
	else if (last != NULL)
	{
		last->next = new;
		last->next->previous = last;
	}
}

/**
 * @brief Adds the node 'new' at the front of the list.
 *
 * @param head A pointer to the head of the list.
 * @param new The node to be added to the list.
 */
void	lstadd_front(list **head, list *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	new->next->previous = new;
	*head = new;
}

/**
 * @brief Returns the last node of the list.
 *
 * @param lst A node in the list.
 * @return Last node of the list or NULL when 'lst' is NULL.
 */
list	*lstlast(list *lst)
{
	list	*temp;

	temp = lst;
	if (temp == 0)
		return (NULL);
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 * The variable 'content' is initialized with the value of the parameter 'content'.
 * The variables 'previous' & 'next' are initialized to NULL
 *
 * @param content A pointer to the content to be added to the new node.
 * @return The new node or NULL upon failure.
 */
list	*lstnew_node(void *content)
{
	list	*node;

	node = malloc(sizeof(list));
	if (!node)
		return (NULL);
	node->previous = NULL;
	node->content = content;
	node->next = NULL;
	return (node);
}
