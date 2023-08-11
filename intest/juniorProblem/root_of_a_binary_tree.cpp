#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    Node *createNewNode(int value)
    {
        Node *node = new Node;
        node->data = value;
        node->left = NULL;
        node->right = NULL;
        return node;
    }

    void Inseartion(int value)
    {
        Node *newNode = createNewNode(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }

        Node *cur = root;
        Node *prv = NULL;
        while (cur != NULL)
        {
            if (newNode->data > cur->data)
            {
                prv = cur;
                cur = cur->right;
            }
            else
            {
                prv = cur;
                cur = cur->left;
            }
        }

        if (newNode->data > prv->data)
            prv->right = newNode;
        else
            prv->left = newNode;
    }

    void topView()
    {
        queue<pair<int, Node *>> level;
        map<int, Node *> res;
        level.push({0, root});

        while (!level.empty())
        {
            auto temp = level.front();
            level.pop();
            if (temp.second != NULL)
                res.insert(temp);

            if (temp.second->right != NULL)
                level.push({temp.first + 1, temp.second->right});

            if (temp.second->left != NULL)
                level.push({temp.first - 1, temp.second->left});
        }

        for (auto it : res)
            cout << it.second->data << " ";
        cout << "\n";
    }
};

int main()
{

    BST myTree;
    Node *root = NULL;

    int t;
    int data;

    cin >> t;

    while (t-- > 0)
    {
        cin >> data;
        myTree.Inseartion(data);
    }

    myTree.topView();

    return 0;
}
