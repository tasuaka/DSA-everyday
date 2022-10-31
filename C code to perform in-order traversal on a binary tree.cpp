
void in-order(struct treenode *tree)  
    {  
        if(tree != NULL)  
        {  
            in-order(tree→ left);  
            printf("%d",tree→ root);  
            in-order(tree→ right);  
        }  
    }  
