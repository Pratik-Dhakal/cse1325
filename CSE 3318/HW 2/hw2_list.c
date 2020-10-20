#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
typedef struct node
{
    int data;
    struct node *next;
}node;
node *L1 = NULL;
node *L2 = NULL;
int count = 1;

struct node *createList(char line[100]);
void displayList(node *head);
void freeList(struct node* head);

int main()
{
    int input = 0;
    do{
        printf("\n\n1 - load from file. It will read from file and create 2 linked lists, L1 and L2."
            "If L1 and L2 exist, they are first destroyed and then they are recreated with "
            "data from the file .\n"
            
            "2 - check that list L1 is sorted in increasing order.\n"
            
            "3 - merge L1 with L2 and print the resulting list, L1." 
                "The result list will be referenced from variable L1."
                "It should check that BOTH lists are sorted in increasing order in order for the merge to work.\n"
             
             "4 - remove duplicates from L1. (this method will assumes L1 is sorted in increasing order.)\n"
             
             "5 - print lists L1 and L2.\n"
             
             "6 - destroy L1 and L2 (and free the memory). If L1 and L2 are NULL it should not crash.\n"
             
             "0 - exit.\n"
             "Enter your choice (1-6): ");

        scanf("%d ",&input);
        if(input == 1)
        {
            if(L1 != NULL || L2 != NULL)
            {
                freeList(L1);
                freeList(L2);
            }
            printf("Enter the name of the file with data: ");

            char file[MAX];
            //fgets(file,MAX,stdin);
            scanf("%s",file);
            FILE *fp;
            fp = fopen(file,"r");
            while(fp == NULL)
            {
                printf("The file couldn't be opened, please try again: ");
                scanf("%s",file);
                fp = fopen(file,"r");
            }
            char line[MAX];
            fgets(line,100,fp);
            node *L1 = NULL;
            L1 = createList(line);
            displayList(L1);

            fgets(line,100,fp);
            node *L2 =NULL;
            L2 = createList(line);
            displayList(L2);
            fclose(fp);


    
        }        

        if(input == 2)
        {

        };
        if(input == 3)
        {

        };
        if(input == 4)
        {

        };
        if(input == 5)
        {

        };
        if(input == 6)
        {

        };



    }while(input !=0);

    freeList(L1);
    freeList(L2);

    return 0;
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

void freeList(struct node* head)
{
   struct node* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }

}