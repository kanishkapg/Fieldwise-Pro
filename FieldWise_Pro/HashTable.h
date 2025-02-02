
#include <iostream>
#include <cstring>
#include <list>

using namespace std;

class Data_Item {
public:
    string key;
    string val;
    string* choices = new string[5];

    Data_Item() {
        key = "";
        val = "";
        
    }
    Data_Item(string k, string v,string* c) {
        key = k;
        val = v; 
        choices = c;
    }


};

class HashTable {
private:
    static const int size = 10;
    list<Data_Item> table[size];

public:
    int getHash(string key); //return the index of the key
    void insert(string key, string val, string* choices);
    void remove(string key);
    bool isKeyExist(string key);
    string search(string key);
    void print();

};



//int main()
//{
//    HashTable ht;
//    cout << ht.getHash("0711234567") << endl;
//    ht.insert("peter", "0713458759");
//    ht.insert("peter", "0713458755");
//    ht.insert("shawn", "0713457755");
//    ht.insert("ali", "0711265789");
//    ht.print();
//
//}

int HashTable::getHash(string key)
{
    int sum = 0;
    for (int i = 0; i < key.length(); i++)
    {
        sum = sum + key[i];
    }
    return sum % size;
}

void HashTable::insert(string key, string val,string* choices)
{
    int index = getHash(key);
    Data_Item di(key, val,choices);

    if (!isKeyExist(key))
        table[index].push_back(di);

    else
        cout << "The key already Exist" << endl;
}

bool HashTable::isKeyExist(string key)
{
    int index = getHash(key);
    list<Data_Item> l = table[index];
    for (Data_Item d : l) {
        if (d.key == key)
            return true;

    }
    return false;
}

void HashTable::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index" << i << ":";
        for (Data_Item d : table[i])
        {
            cout << d.key << "-" << d.val << " | ";
        }
        cout << endl;
    }
}


