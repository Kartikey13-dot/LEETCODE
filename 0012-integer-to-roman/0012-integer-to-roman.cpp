class Solution {
public:
    string convert(int rem, int s, int dig) {
        if (s == 1) {
            if (dig <= 3) return string(dig, 'I');
            if (dig == 4) return "IV";
            if (dig == 5) return "V";
            if (dig <= 8) return "V" + string(dig - 5, 'I');
            return "IX";
        }

        if (s == 10) {
            if (dig <= 3) return string(dig, 'X');
            if (dig == 4) return "XL";
            if (dig == 5) return "L";
            if (dig <= 8) return "L" + string(dig - 5, 'X');
            return "XC";
        }

        if (s == 100) {
            if (dig <= 3) return string(dig, 'C');
            if (dig == 4) return "CD";
            if (dig == 5) return "D";
            if (dig <= 8) return "D" + string(dig - 5, 'C');
            return "CM";
        }

        // s == 1000
        return string(dig, 'M');
    }

    string intToRoman(int num) {
        int c = 0;
        string ans;

        while (num != 0) {
            int dig = num % 10;
            int s = pow(10, c);
            int rem = s * dig;

            ans = convert(rem, s, dig) + ans;

            num /= 10;
            c++;
        }

        return ans;
    }
};