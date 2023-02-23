class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1 = version1.length();
        int n2  = version2.length();
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0;
        while(i < n1 || j < n2){
            while(i < n1 && version1[i] != '.'){
                sum1 = sum1 * 10 + (version1[i] - '0');
                i++;
            }
            while(j < n2 && version2[j] != '.'){
                sum2 = sum2 * 10 + (version2[j] - '0');
                j++;
            }
            if(sum1 > sum2){
                return 1;
            }else if(sum1 < sum2){
                return -1;
            }
            sum1 = 0; 
            sum2 = 0;
            i++; 
            j++;
        }
        return 0;
    }
};
