#ifndef TREE_H
#define TREE_H

typedef struct node {
        int key;
        struct node *left;
        struct node *right;
}NODE;

NODE* get_node();
NODE* insert(NODE *root, key);
void delete_tree(NODE *root);
NODE* search_tree(NODE *root, int search_key);

#endif
