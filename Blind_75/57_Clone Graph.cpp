class Solution {
public:
    unordered_map<Node*, Node*> mp;

    Node* cloneGraph(Node* node) {
        if (node == NULL)
            return NULL;

// If already cloned
        if (mp.find(node) != mp.end())
            return mp[node];

// Create clone
        Node* clone = new Node(node->val);
        mp[node] = clone;

// Clone neighbors
        for (int i = 0; i < node->neighbors.size(); i++) {
            clone->neighbors.push_back(cloneGraph(node->neighbors[i]));
        }

        return clone;
    }
};