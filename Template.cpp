// Introduction to templates

template <typename T>
T square(T x) {
    return x*x;
}

int main(){        // Code bloat
    cout << square(5) << endl;
    cout << square(5.5) << endl;
}
