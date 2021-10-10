class Solution
{
public:
    string intToRoman(int a)
    {
        string u[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string t[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string h[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string th[] = {"", "M", "MM", "MMM"};

        string roman = th[a / 1000] + h[(a % 1000) / 100] + t[(a % 100) / 10] + u[a % 10];
        return roman;
    }
};