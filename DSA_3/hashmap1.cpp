#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

class Hashing{
    public:

    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets; //by division method
    }

    void addkey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deletekey(int key){
        int idx = hashvalue(key);
        if(searchkey(key) != hashtable[idx].end() ){
            hashtable[idx].erase(searchkey(key));
            cout<<key<<" is Deleted Successfully"<<endl;

        }
        else{
            cout<<"Not present"<<endl;
        }
    }

    // void display(){ // incorrect
    //     int i=0;
    //     Hashing* nh = hashtable[i].begin();
    // }

};

int main(){

    Hashing* h = new Hashing(10);

    h->addkey(5);
    h->addkey(2);
    h->addkey(3);
    h->addkey(9);

    h->deletekey(3);
    h->deletekey(3);






    return 0;
}