#ifndef TEST_H
#define TEST_H


class test
{
    public:
        test(int,int);
        void regularFunction();
        void constFunction() const;
        void print();

    protected:

    private:
        int regVar;
        const int constVar;
};

#endif // TEST_H
