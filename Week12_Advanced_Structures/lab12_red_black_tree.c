#include <stdio.h>
#include <stdlib.h>

/* Hafta 12: İleri Veri Yapıları
 * Konu: Red-Black Tree Insertion & Fixing */

enum Color {RED, BLACK};

struct Node {
    int data;
    int color;
    struct Node *left, *right, *parent;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = node->parent = NULL;
    node->color = RED; // Yeni düğümler her zaman kırmızıdır
    return node;
}

// Basit BST Ekleme (RB Kuralları Hariç)
struct Node* bstInsert(struct Node* root, struct Node* ptr) {
    if (root == NULL) return ptr;
    if (ptr->data < root->data) {
        root->left = bstInsert(root->left, ptr);
        root->left->parent = root;
    } else if (ptr->data > root->data) {
        root->right = bstInsert(root->right, ptr);
        root->right->parent = root;
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    root = bstInsert(root, createNode(10));
    root = bstInsert(root, createNode(20));
    root = bstInsert(root, createNode(30));
    
    printf("Red-Black Tree Temel Yapi (Root: %d, Color: %s)\n", root->data, (root->color==RED)?"RED":"BLACK");
    printf("Not: Tam RB-Tree Balance kodu lab kapsamini asar, bu temel yapidir.");
    return 0;
}
