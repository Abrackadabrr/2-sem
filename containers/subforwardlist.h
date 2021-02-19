class subforwardlist: public Container
{

private:
	struct node
	{
		node* next_;
		int data_;

		node(int data, node* next = nullptr)
		{
			next_ = next;
			data_ = data;
		}

	};

	unsigned int size_;
	node* head;

    void pop_front();

public:

	subforwardlist();

	~subforwardlist();

	bool push_back(int d);

	int pop_back();

	bool push_forward(int d);

	int pop_forward();

	bool push_where(unsigned int where, int d);

	bool erase_where(unsigned int where);

	unsigned int get_size();

	void clear();

	int operator [](int i);


};
