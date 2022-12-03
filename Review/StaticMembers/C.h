#ifndef C_H
#define C_H

class C
{
public:
    C(int x):i(x)
    {
        ++num_objects;
    }
    ~C()
    {
        --num_objects;
    }

    static void increment_j();
    static int get_j();
    
    static int num_objects; // number of objects curr alive
    int i;
private:
    static int j;//means the memor allocation does not change.

};

#endif
