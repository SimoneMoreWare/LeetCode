class Solution {
    public int maxScore(String s) {
        
        int left = 0;
        int right = s.length();
        int i;  
        int j;
        int max = 0;
        int countLeftZero;
        int countRightOne;

        for(i=0;i<s.length()-1;i++){
            countLeftZero = 0;
            countRightOne = 0;

            String leftPart = s.substring(left,i+1);
            String rightPart = s.substring(i+1,right);

            for (j = 0; j < leftPart.length(); j++) {
                if(leftPart.charAt(j)=='0') countLeftZero++;
            }
            for (j = 0; j < rightPart.length(); j++) {
                if(rightPart.charAt(j)=='1') countRightOne++;
            }

            if(countLeftZero+countRightOne > max) max = countLeftZero + countRightOne;

        }

        return max;



    }
}
