#include <stdlib.h>
#include <stdio.h>

typedef struct linked_s {
    int data;
    struct linked_s *next;
} linked_t;

static int add_new_elem(int i, linked_t **head)
{
    linked_t *new = malloc(sizeof(linked_t));
    linked_t *tmp = *head;

    if (new == NULL)
        return (-1);
    new->data = i;
    new->next = NULL;
    if (*head == NULL) {
        *head = new;
        return (0);
    }
    for(; tmp->next != NULL; tmp = tmp->next);
    tmp->next = new;
    return (0);
}

int main(void)
{
    linked_t *head;
    int i;

    if (add_new_elem(i, &head) == -1)
        return (84);
    if (add_new_elem(1, &head) == -1)
        return (84);
    if (add_new_elem(2, &head) == -1)
        return (84);
    for (linked_t *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%d\n", tmp->data);
    free(head);
    return (0);
}
