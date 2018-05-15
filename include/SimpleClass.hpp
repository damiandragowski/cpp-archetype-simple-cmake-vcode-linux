
template<typename T>
class SimpleClass {
    private:
        T data;
    public:
        SimpleClass():data() {}
        SimpleClass(T in) { 
            data = in;
        }
        SimpleClass(SimpleClass && in) { // move constructor
            data = in.data;
        }
        void display(); 
};