class ProductOfNumbers {
private:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> vec;
public:
    ProductOfNumbers() {
        fast();
        vec.clear();
        vec.push_back(1);
    }
    void add(int num) {
        if(num==0){
            vec.clear();
            vec.push_back(1);
        }
        else{
            vec.push_back(vec.back()*num);
        }
    }
    int getProduct(int k) {
        int n=vec.size();
        if((n-1-k)<0){
            return 0;
        }
        return (
            vec.back()/vec[n-1-k]
        );
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */