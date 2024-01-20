#ifndef HASHFUNC_H
#define HASHFUNC_H
#include <string>
#include <map>

using namespace std;

class HashFunc {
    protected:
        int i_hashed_value;

    public:
        virtual void hashing(string url) = 0;
};

#endif