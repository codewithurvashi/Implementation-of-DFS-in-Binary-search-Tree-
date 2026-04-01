#include <iostream>
using namespace std;

// Node Structure
struct Node {
    public:
    	int data;
    	Node* left;
		Node* right;
		Node(int val){
			data=val;
			left=right=NULL;
		}
};

// Insert in BST
Node* insert(Node* root, int val) {
    if(root==NULL){
		return new Node(val);
	}
	if(val>root->data){
		root->right=insert(root->right,val);
	}
	if(val<root->data){
		root->left=insert(root->left,val);
	}
    return root;
}

// Search in BST
bool search(Node* root, int key) {
	if(root==NULL){
		return false;
	}
    if(root->data==key){
    	return true;
	}
	else{
		if(key>root->data){
			return search(root->right,key);
		}
		else{
			return search(root->left,key);
		}
	}
}

// Find Minimum
Node* findMin(Node* root) {
	if(root==NULL){
		return NULL;
	}
    while(root->left!=NULL){
    	root=root->left;
	}
	return root;
}

// Find Maximum
Node* findMax(Node* root) {
    if(root==NULL){
		return NULL;
	}
    while(root->right!=NULL){
    	root=root->right;
	}
	return root;
}


// Traversals
void inorder(Node* root) {
    if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(Node* root) {
	if(root==NULL){
		return;
	}
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node* root) {
    if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}

// Main Function
int main() {
    Node* root = NULL;

    // Insert elements
    int arr[] = {5, 3, 7, 2, 4, 8};

    for(int i = 0; i < 6; i++) {
        root = insert(root, arr[i]);
    }

    // Traversals
    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    // Search
    cout << "\nSearch 4: ";
	if(search(root, 4)) 
		cout<<"Found \n"; 
	else 
		cout<<"Not Found \n";

    inorder(root);

    // Min / Max
    cout << "\nMin: " << findMin(root)->data;
    cout << "\nMax: " << findMax(root)->data;

    return 0;
}
