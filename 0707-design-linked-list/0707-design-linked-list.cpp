class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(NULL) {}
    };

    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = tail = NULL;
        size = 0;
    }

    int get(int index) {
        if(index < 0 || index >= size) return -1;

        Node* temp = head;
        for(int i = 0; i < index; i++)
            temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;

        if(size == 0) tail = node;
        size++;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);

        if(size == 0) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if(index > size || index < 0) return;

        if(index == 0) {
            addAtHead(val);
            return;
        }
        if(index == size) {
            addAtTail(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index-1; i++)
            temp = temp->next;

        Node* node = new Node(val);
        node->next = temp->next;
        temp->next = node;
        size++;
    }

    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;

        if(index == 0) {
            head = head->next;
            if(size == 1) tail = NULL;
        } else {
            Node* temp = head;
            for(int i = 0; i < index-1; i++)
                temp = temp->next;

            if(temp->next == tail)
                tail = temp;

            temp->next = temp->next->next;
        }
        size--;
    }
};
