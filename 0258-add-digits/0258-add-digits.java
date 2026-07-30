class Solution {
    public int addDigits(int num) {
        int temp = num;
        int digit = 0;

        while(temp > 9){
            int sum = 0;
        while(temp > 0){
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        temp = sum;
        }
       return temp;

    }
}