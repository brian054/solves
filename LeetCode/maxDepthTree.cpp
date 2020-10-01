/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

#include <queue>

class Solution {
public:
    int maxDepth(Node* root) {
        int max = 0;
        if (root == NULL) {
            return max;
        } 
        
        // don't need a visited array as we are dealing with a tree
        queue<Node *> myQueue;
        
        // Put root on queue
        myQueue.push(root);
        
        while (!myQueue.empty()) {
            max += 1; // Records the level we get to (depth)
            
            int length = myQueue.size();
            while (length != 0) {
                Node *currentNode = myQueue.front();
                myQueue.pop();
                
                // Put children in queue
                for (int i = 0; i < currentNode->children.size(); i++) {
                    myQueue.push(currentNode->children[i]);
                }
                
                length -= 1;
             }
        }
        return max;
    }
};