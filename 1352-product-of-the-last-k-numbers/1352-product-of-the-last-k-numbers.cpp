class ProductOfNumbers {
public:
    vector<int>mp;
    ProductOfNumbers() {}
    void add(int num) {
       mp.push_back(num);   
    }
    int getProduct(int k) {
        int mult=1;
        int n=mp.size();
       for(int i=1;i<=k;i++)
       {
        mult*=mp[n-i];
       }
       return mult;
    }
};