#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *leftchild, *rightchild;
} node;

node *create_tree(int value)
{
    node *root = malloc(sizeof(node));
    root->data = value;
    root->leftchild = NULL;
    root->rightchild = NULL;
    return root;
}

node *find_value(node *root, int value) {
    if (root == NULL) {
        return NULL;
    }
    int data = root->data;
    if (data == value) {
        return root;
    }
    if (value > data) {
        return find_value(root->rightchild, value);
    }
    return find_value(root->leftchild, value);
}

int main()
{
    return 0;
}
