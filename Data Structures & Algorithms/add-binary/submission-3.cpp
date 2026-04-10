class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i = a.length() - 1, j = b.length() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int n1 = (i >= 0 ? a[i--] - '0' : 0);
            int n2 = (j >= 0 ? b[j--] - '0' : 0);
            int sum = n1 + n2 + carry;

            s += char((sum % 2) + '0');
            carry = sum / 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
