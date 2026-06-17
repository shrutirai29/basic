#include <iostream>
#include <queue>
using namespace std;

// Node class for Linked List
class ListNode {
public:
    int data;
    ListNode* next;
    ListNode(int val) {
        data = val;
        next = nullptr;
    }
};

// Singly Linked List class
class LinkedList {
private:
    int size;
public:
    ListNode* head;

    LinkedList() {
    head = nullptr;
    size = 0;
    }

    // Add node to end of list
    void addNode(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
        } else {
            ListNode* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
        size++;
    }

    // Insert node at specific index
    bool insertAt(int index, int val) {
        if (index < 0 || index > size) return false;

        ListNode* newNode = new ListNode(val);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            ListNode* temp = head;
            for (int i = 0; i < index - 1; i++)
                temp = temp->next;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        size++;
        return true;
    }

    // Delete node by value
    void deleteNode(int val) {
        if (!head) return;

        if (head->data == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }

        ListNode* curr = head;
        while (curr->next && curr->next->data != val)
            curr = curr->next;

        if (curr->next) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            size--;
        }
    }

    // Delete node at index
    bool deleteAt(int index) {
        if (index < 0 || index >= size || !head) return false;

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        } else {
            ListNode* temp = head;
            for (int i = 0; i < index - 1; i++)
                temp = temp->next;

            ListNode* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
        }
        size--;
        return true;
    }

    // Search a value
    bool search(int val) {
        ListNode* temp = head;
        while (temp) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Get current size
    int getSize() {
        return size;
    }

    // Display the list
    void display() {
        ListNode* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Node class for Binary Tree
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Construct Binary Tree from Linked List (Level Order)
TreeNode* createTreeFromLinkedList(ListNode* head) {
    if (!head) return nullptr;

    TreeNode* root = new TreeNode(head->data);
    head = head->next;

    queue<TreeNode*> q;
    q.push(root);

    while (head) {
        TreeNode* parent = q.front();
        q.pop();

        TreeNode* leftChild = new TreeNode(head->data);
        parent->left = leftChild;
        q.push(leftChild);
        head = head->next;
        if (!head) break;

        TreeNode* rightChild = new TreeNode(head->data);
        parent->right = rightChild;
        q.push(rightChild);
        head = head->next;
    }

    return root;
}

// Tree Traversals
void preorder(TreeNode* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(TreeNode* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Search value in Binary Tree (recursive)
bool searchInTree(TreeNode* root, int val) {
    if (!root) return false;
    if (root->data == val) return true;
    return searchInTree(root->left, val) || searchInTree(root->right, val);
}

// MAIN FUNCTION
int main() {
    LinkedList list;
    int n, val;

    cout << "How many elements do you want to add in the linked list? ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        list.addNode(val);
    }

    cout << "\nCurrent Linked List:\n";
    list.display();

    // Delete by value
    cout << "\nEnter value to delete: ";
    cin >> val;
    list.deleteNode(val);
    cout << "List after deletion:\n";
    list.display();

    // Insert at index
    int index, data;
    cout << "\nInsert value at specific index.\nEnter index and value: ";
    cin >> index >> data;
    if (list.insertAt(index, data)) {
        cout << "After Insertion:\n";
        list.display();
    } else {
        cout << "Invalid index.\n";
    }

    // Delete at index
    cout << "\nEnter index to delete: ";
    cin >> index;
    if (list.deleteAt(index)) {
        cout << "After Deletion at index:\n";
        list.display();
    } else {
        cout << "Invalid index.\n";
    }

    // Search
    cout << "\nEnter value to search in list: ";
    cin >> val;
    if (list.search(val)) {
        cout << val << " exists in the list.\n";
    } else {
        cout << val << " does not exist in the list.\n";
    }

    cout << "\nTotal elements in list: " << list.getSize() << endl;

    // Create Binary Tree
    TreeNode* root = createTreeFromLinkedList(list.head);
    cout << "\nBinary Tree Traversals:\n";

    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);

    // Tree search
    cout << "\n\nEnter value to search in Binary Tree: ";
    cin >> val;
    if (searchInTree(root, val)) {
        cout << val << " found in the tree.\n";
    } else {
        cout << val << " not found in the tree.\n";
    }

    return 0;
}
