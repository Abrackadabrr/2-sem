class Container
{
public:

    virtual ~Container() {}

    virtual void clear() = 0;

    virtual bool push_back(int d) = 0;

    virtual int pop_back() = 0;

};

