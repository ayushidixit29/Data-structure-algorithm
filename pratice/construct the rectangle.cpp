class Solution {
public:
    vector<int> constructRectangle(int area) {
        int length = sqrt(area);
        int width = sqrt(area);
        while(length * width != area){
            if(length * width < area) length++;
            else width--;
        }
        return {length, width};
    }
};
