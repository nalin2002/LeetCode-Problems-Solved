class Vector2D {
private:
    vector<vector<int>>& vec;
    int outer = 0;
    int inner = 0;

    void advanceToNext() {
        while (outer < vec.size() && inner == vec[outer].size()) {
            outer++;
            inner = 0;
        }
    }
public:
    Vector2D(vector<vector<int>>& vec): vec(vec) {
      
    }
    
    int next() {
        hasNext();
        return vec[outer][inner++];
    }
    
    bool hasNext() {
        advanceToNext();
        return outer < vec.size();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(vec);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */