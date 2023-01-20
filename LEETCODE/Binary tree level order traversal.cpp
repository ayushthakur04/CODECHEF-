class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>a;
        queue<TreeNode*>q;
        if(root) 
        q.push(root);
        while(!q.empty())
        {
           int size=q.size();
           vector<int>x;
           while(size--)
           {
               TreeNode* temp=q.front();\
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
               x.push_back(temp->val);
               q.pop();
           }
           a.push_back(x);
        }
            
            
          return a;      
        
    }
};
