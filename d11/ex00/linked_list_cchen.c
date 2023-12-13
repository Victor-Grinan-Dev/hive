#include <stdio.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int main(void)
{
	//create object out of the blue print....empty inside
	t_list obj1; 
	t_list obj2;
	t_list obj3;

	//create pointers... not pointing anywhere yet
	t_list *node1;
	t_list *node2;
	t_list *node3;

	//linking pointers to objects (***malloc***???)
	node1 = &obj1;
	node2 = &obj2;
	node3 = &obj3;	

	//populate data to object
	node1->data = &n1;
	node2->data = &n2;
	node3->data = &n3;

	//linking nodes to eachother
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("%d\n", node1);
	printf("%d\n", node2);
	printf("%d\n", node3);
}