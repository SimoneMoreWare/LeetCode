import java.util.ArrayList;

class Solution {
    public int[] separateDigits(int[] nums) {
        ArrayList<Integer> res = new ArrayList<Integer>();

        for (int num : nums) {
             if(num>=100000){
                res.add(num/100000);
                num = num % 100000;
                res.add(num/10000);
                num = num % 10000;
                res.add(num/1000);
                num = num % 1000;
                res.add(num/100);
                num = num % 100;
                res.add(num/10);
                num = num % 10;
                res.add(num/1);}
            else if(num>=10000){
                res.add(num/10000);
                num = num % 10000;
                res.add(num/1000);
                num = num % 1000;
                res.add(num/100);
                num = num % 100;
                res.add(num/10);
                num = num % 10;
                res.add(num/1);
            }else if(num>=1000){
                res.add(num/1000);
                num = num % 1000;
                res.add(num/100);
                num = num % 100;
                res.add(num/10);
                num = num % 10;
                res.add(num/1);
            }else if(num>=100){
                res.add(num/100);
                num = num % 100;
                res.add(num/10);
                num = num % 10;
                res.add(num/1);
            }else if(num>=10){
                res.add(num/10);
                num = num % 10;
                res.add(num);
            }else{
                res.add(num);
            }
        }

        int[] resultArray = new int[res.size()];
        for (int i = 0; i < res.size(); i++) {
            resultArray[i] = res.get(i);
        }

        return resultArray;
    }
}

//2553_SeparatetheDigitsinanArray

