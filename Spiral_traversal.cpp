vector <int> Spriral_traversal(Node* root)
{
    vector<int> v;
    if(root==NULL)
    return v ;
    queue<Node *>q;
    stack<int> s;
    bool reverse=false;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            if(reverse==true)
                s.push(curr->data);
            else
                v.push_back(curr->data);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        if(reverse==true)
        {
            while(s.empty()==false)
            {
                v.push_back(s.top());
                s.pop();
            }
        }
    reverse=!reverse;
    
    }
    return v;
}
