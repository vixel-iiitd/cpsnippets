class Node{
public:
    char data;
    bool terminal;
    unordered_map<char,Node*> children;

    Node(char data){
        this->data=data;
        this->terminal=false;
    }
};

class Trie{
public:
    Node *root;
    int count;

    Trie(){
        this->root=new Node('\0');
        this->count=0;
    }

    void addWord(string str){
        Node *temp=root;
        for(auto c:str){
            if(temp->children.count(c)){
                temp=temp->children[c];
            } else{
                Node *n=new Node(c);
                temp->children[c]=n;
                temp=temp->children[c];
            }
        }
        temp->terminal=true;
        count++;
    }

    bool search(string str){
        Node *temp=root;
        for(auto c:str){
            if(temp->children.count(c)){
                temp=temp->children[c];
            } else{
                return false;
            }
        }
        if(temp->terminal){
            return true;
        } else{
            return false;
        }
    }
};
