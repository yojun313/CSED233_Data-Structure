#pragma once
#include <string>

using namespace std;

class Node
{
public:
    Node(int key) : key(key), height(0), left(NULL), right(NULL), frequency(1) {}
    int key;
    int height;
    Node *left;
    Node *right;
    /////////////////////////////////////////////////////////
    //////  TODO: Add public members if required ///////////
    int frequency;
    ///////////      End of Implementation      /////////////
    /////////////////////////////////////////////////////////

    string print_key() { return to_string(key); };
};

class BinaryTree
{
public:
    BinaryTree() { _root = NULL; };
    ~BinaryTree()
    {
        delete[] _root;
        _root = NULL;
    };
    string preOrder();
    string inOrder();

protected:
    Node *_root;

private:
    void _inOrder(string &output, Node *cur);
    void _preOrder(string &output, Node *cur);
};
