class HashTable {
public:
    int HashFunction(int key);
    void Insert(int key, int value);
    int Remove(int key);
    int Search(int key);
};

int HashTable::HashFunction(int key) {
    
    return key % TABLE_SIZE;
}

void HashTable::Insert(int key, int value) {
    
    
}

int HashTable::Remove(int key) {
    
    
    return value;
}

int HashTable::Search(int key) {
    
    return value;
}
