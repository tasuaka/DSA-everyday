C function to count the number of nodes present in a binary tree.
int count (struct node* t)  
{  
    if(t)  
    {  
        int l, r;  
        l = count(t->left);  
        r=count(t->right);  
        return (1+l+r);  
    }  
    else   
    {  
        return 0;  
    }  
}  
