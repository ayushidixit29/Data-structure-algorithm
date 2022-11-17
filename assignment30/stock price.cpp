class StockPrice {
public:
    
    unordered_map<int,int>mp; //timestamp as key and price as value
    int currentTime = 0;
    multiset<int>S; //insert price
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(mp.find(timestamp) != mp.end()){
            auto it = S.find(mp[timestamp]);
	        S.erase(it);
        }
        mp[timestamp]=price;
        S.insert(price);
        currentTime = max(timestamp, currentTime);
    }
    
    int current() {
        return mp[currentTime];
    }
    
    int maximum() {
        auto it = S.end();
        return  *(--it);
    }
    
    int minimum() {
        return *S.begin();
    }
}

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
