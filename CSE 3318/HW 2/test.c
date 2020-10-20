#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;

}node;

struct node *createList(char line[100]);
void displayList(node *head);

int main()
{
    FILE *fp;
    fp = fopen("Data1.txt","r");

    char line[100];

    fgets(line,100,fp);
    node *L1 = NULL;
    L1 = createList(line);
    displayList(L1);

    fgets(line,100,fp);
    node *L2 =NULL;
    L2 = createList(line);
    displayList(L2);


    return 0;

}

void displayList(node *head)
{
    node *p = head;

    printf("The content of the list are: \n");

    while(p != NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
}
struct node *createList(char line[100])
{
    char *token;
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;

    token = strtok(line," ");

    //printf("%s\n",token);
    while(token != NULL)
    {
        //printf("%s\n",token);
        temp = (node*)malloc(sizeof(node));
        temp->data = atoi(token);
        temp ->next = NULL;

        if(head == NULL)
            head = temp;
        
        else
        {
            p = head;
            while(p->next != NULL)
                p = p->next;
            
            p->next = temp;
        }
        
        token = strtok(NULL," ");


        
    }

    return head;
    
}