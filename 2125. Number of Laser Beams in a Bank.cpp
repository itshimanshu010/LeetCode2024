class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n =bank.size();

        int previousDevCount = 0;

        int result = 0;

        for(int i=0;i<n;i++){
            
            int currentDevCount = 0;
            for(char &ch : bank[i]){
                if(ch == '1'){
                    currentDevCount++;
                }
            }

            result += (currentDevCount * previousDevCount);

            if(currentDevCount != 0){
                previousDevCount = currentDevCount; 
            }
        }

        return result;
    }
};
