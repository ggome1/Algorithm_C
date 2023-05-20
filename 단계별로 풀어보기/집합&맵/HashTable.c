#include <stdio.h>
#include <stdlib.h>

struct bucket* hashTable = NULL;
int size = 10;

struct node 
{
    int key;
    int value;
    struct node* next;
};

struct bucket
{
    struct node* head;
    int count;
};

struct node* create(int key, int value)
{
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> key = key;
    new_node -> value = value;
    new_node -> next = NULL;

    return new_node;
}

int hashfunc(int key)
{
    return key%size;
}

void insert(int key, int value)
{
    int hashindex = hashfunc(key);

    struct node *new_node = create(key, value);

    if(hashTable[hashindex].count == 0)
    {
        hashTable[hashindex].head = new_node;
        hashTable[hashindex].count = 1;
    }
    else
    {
        new_node -> next = hashTable[hashindex].head;
        hashTable[hashindex].head = new_node;
        hashTable[hashindex].count++;
    }
    return;
}

void remove1(int key)
{
    int hashindex = hashfunc(key);
    struct node* node;
    struct node* trace;
    node = hashTable[hashindex].head;

    if(node == NULL)
    {
        printf("\n:(");
        return ;
    }

    while(node != NULL)
    {
        if(node -> key == key)
        {
            if(node == hashTable[hashindex].head)
            {
                hashTable[hashindex].head = node -> next;
            }
            else
            {
                trace -> next = node -> next;
            }
            hashTable[hashindex].count--;
            free(node);
            return ;
        }
        trace = node;
        node = node -> next;
    }
    printf("\n no key");
    return ;
}

void search(int key)
{
    int hashindex = hashfunc(key);
    struct node* node = hashTable[hashindex].head;

    if(node == NULL)
    {
        printf("\n:(");
        return ;
    }
    while(node != NULL)
    {
        if(node -> key == key)
        {
            printf("\nkey = [%d] value = [%d]", node -> key, node -> value);
            return ;
        }
        node = node -> next;
    }
    printf("\n:(");
    return ;
}

void display()
{
    struct node* node;
    int i;
    i = -1;
    while(++i < size)
    {
        node = hashTable[i].head;
    printf("Bucket[%d]", i);
        while(node != NULL)
        {
            printf("\nkey = [%d] value = [%d]", node -> key, node -> value);
            node = node -> next;
        }
        printf("\n");
    }
    return ;
}

int main()
{
    hashTable = (struct bucket*)malloc(size*sizeof(struct bucket));
}