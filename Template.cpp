// Introduction to templates

template <typename T>
T square(T x) {
    return x*x;
}

template <typename T>
class BoVector {
    T arr[1000];
    int size;
public:
    BoVector():size(0){}
    void push(T x) {arr[size] = x; size++;}
    T get(int i) const{return arr[i];}
    int getSize() const { return size;}
    void print() const {for(int i =0; i < size; i++) {cout<<arr[i]<<endl;}}
};

template <typename T>
BoVector<T>

int main(){        // Code bloat
    cout << square(5) << endl;
    cout << square(5.5) << endl;
}
