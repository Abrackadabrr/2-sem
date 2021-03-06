class subvector: public Container
{
private:
    int* mas;
    unsigned int top;
    unsigned int capacity;

public:

    subvector();

    ~subvector();

    void clear();

    void expand(unsigned int new_cap);

    bool push_back(int d);

    int pop_back();

    bool resize(unsigned int new_capacity);

    void shrink_to_fit();

    //! Reloaded operator [] for vector
    int operator [](int i);

    unsigned int get_cap();

    unsigned int get_top();

};
