class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& cookieSize) {
        
        sort(greed.begin(), greed.end());
        sort(cookieSize.begin(),cookieSize.end());

        int currentpChild = 0;
        int currentpCookie = 0;

        while(currentpChild < greed.size() && currentpCookie < cookieSize.size()){
            if(greed[currentpChild]<= cookieSize[currentpCookie])
            currentpChild++;

        currentpCookie++;
        }
        return currentpChild;
    }
};
