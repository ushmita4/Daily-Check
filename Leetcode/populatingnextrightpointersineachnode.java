class Solution {
    public Node connect(Node root) {
        if(root == null)
            return root;
        if(root.left != null){
            if(root.next != null)
                root.right.next = root.next.left;
            else
                root.right.next = null;
            root.left.next = root.right;
            connect(root.left);
            connect(root.right);
        }
        return root;
    }
}
