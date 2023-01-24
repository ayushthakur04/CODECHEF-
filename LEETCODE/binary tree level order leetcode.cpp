class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>Q;
        vector<vector<int>>V;


        if(root!=NULL)
        {
            Q.push(root);
        }

        while(!Q.empty())
        {

             int size = Q.size();
              vector<int>T;
             while(size--)
             {
              TreeNode* temp = Q.front();
              if(temp->left!=NULL)
               {
                Q.push(temp->left);
               }
               if(temp->right!=NULL)
                {
                Q.push(temp->right);
                }
              T.push_back(temp->val);
              Q.pop();
             }
          V.push_back(T);
        }
        return V;
    }
};
