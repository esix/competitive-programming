#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <deque>
#include <cmath>


class BigFloat {
private:
    char sign;
    std::deque<char> number;
    int decimals;

    //Error Checking
    bool error;
    std::string error_code;

    //Transformations int<-->char single digit
    inline static int CharToInt(const char& val)
    {
        return (val - '0');
    };
    inline static char IntToChar(const int& val)
    {
        return (val + '0');
    };

    //Comparator without sign, utilized by Comparators and Operations
    static int CompareNum(const BigFloat& left, const BigFloat& right);

    //Operations without sign and decimals, utilized by Operations
    static BigFloat Sum(const BigFloat& left, const BigFloat& right);
    static BigFloat Subtract(const BigFloat& left, const BigFloat& right);
    static BigFloat Multiply(const BigFloat& left, const BigFloat& right);

public:

    static BigFloat Pow(const BigFloat& left, const BigFloat& right);


    //Constructors
    BigFloat()
    {
        sign = '\0';
        decimals = 0;
        error = 1;
        error_code = "Unset";
    };
    BigFloat(const char* strNum)
    {
        *this = strNum;
    };
    BigFloat(std::string strNum)
    {
        *this = strNum;
    };
    BigFloat(int Num)
    {
        *this = Num;
    };
    BigFloat(double Num)
    {
        *this = Num;
    };

    //Assignment operators
    BigFloat& operator=(const char* strNum);
    BigFloat& operator=(std::string strNum);
    BigFloat& operator=(int Num);
    BigFloat& operator=(double Num);

    //Operations
    friend BigFloat operator+(const BigFloat& left_, const BigFloat& right_);
    friend BigFloat operator+(const BigFloat& left, const int& int_right);
    friend BigFloat operator+(const BigFloat& left, const double& double_right);

    friend BigFloat operator-(const BigFloat& left_, const BigFloat& right_);
    friend BigFloat operator-(const BigFloat& left, const int& int_right);
    friend BigFloat operator-(const BigFloat& left, const double& double_right);

    friend BigFloat operator*(const BigFloat& left, const BigFloat& right);
    friend BigFloat operator*(const BigFloat& left, const int& int_right);
    friend BigFloat operator*(const BigFloat& left, const double& double_right);

    friend BigFloat operator/(const BigFloat& left, const BigFloat& right);
    friend BigFloat operator/(const BigFloat& left, const int& int_right);
    friend BigFloat operator/(const BigFloat& left, const double& double_right);
    static BigFloat PrecDiv(const BigFloat& left, const BigFloat& right, int div_precision);
    static BigFloat PrecDiv(const BigFloat& left, const int& int_right, int div_precision);
    static BigFloat PrecDiv(const BigFloat& left, const double& double_right, int div_precision);

    friend BigFloat operator%(const BigFloat& left, const BigFloat& right);
    friend BigFloat operator%(const BigFloat& left, const int& int_right);

    static BigFloat Power(const BigFloat& left, const BigFloat& right, int div_precision = 0);
    static BigFloat Power(const BigFloat& left, const int& int_right, int div_precision = 0);
    static BigFloat Power(const BigFloat& left, const double& double_right, int div_precision = 0);

    BigFloat& operator++(int i)
    {
        *this = *this + 1;
        return *this;
    };
    BigFloat& operator++()
    {
        *this = *this + 1;
        return *this;
    };
    BigFloat& operator--(int i)
    {
        *this = *this - 1;
        return *this;
    };
    BigFloat& operator--()
    {
        *this = *this - 1;
        return *this;
    };

    //Comparators
    bool operator== (const BigFloat& right) const;
    bool operator== (const int& int_right) const;
    bool operator== (const double& double_right) const;

    bool operator!= (const BigFloat& right) const;
    bool operator!= (const int& int_right) const;
    bool operator!= (const double& double_right) const;

    bool operator> (const BigFloat& right) const;
    bool operator> (const int& int_right) const;
    bool operator> (const double& double_right) const;

    bool operator>= (const BigFloat& right) const;
    bool operator>= (const int& int_right) const;
    bool operator>= (const double& double_right) const;

    bool operator< (const BigFloat& right) const;
    bool operator< (const int& int_right) const;
    bool operator< (const double& double_right) const;

    bool operator<= (const BigFloat& right) const;
    bool operator<= (const int& int_right) const;
    bool operator<= (const double& double_right) const;

    //Stream Operators
    friend std::ostream& operator<<(std::ostream& out, const BigFloat& right);
    friend std::istream& operator>>(std::istream& in, BigFloat& right);

    //Transformation Methods
    double ToDouble() const;
    float ToFloat() const;
    std::string ToString() const;
    void SetPrecision(int prec); //Approximate number or Increase number decimals

    void LeadTrim(); //Remove number leading zeros, utilized by Operations without sign
    void TrailTrim(); //Remove number non significant trailing zeros

    //Error Checking
    inline bool HasError() const
    {
        return error;
    };
    inline std::string GetError() const
    {
        if(error)
            return error_code;
        else
            return "No Error";
    };

    //Miscellaneous Methods
    inline int Decimals() const
    {
        return decimals;
    };
    inline int Ints() const
    {
        return number.size() - decimals;
    };
    inline int MemorySize() const
    {
        return sizeof(*this) + number.size() * sizeof(char);
    };
    std::string Exp() const;

};


//Comparator without sign, utilized by Comparators and Operations
int BigFloat::CompareNum(const BigFloat& left, const BigFloat& right)
{
    if((left.number.size() - left.decimals) > (right.number.size() - right.decimals))
        return 1;
    else if((left.number.size() - left.decimals) < (right.number.size() - right.decimals))
        return 2;

    if(left.decimals > right.decimals) {
        BigFloat tmp;
        tmp = right;
        while(left.decimals > tmp.decimals) {
            tmp.decimals++;
            tmp.number.push_front('0');
        }

        for(int i = left.number.size() - 1; i >= 0; i--) {
            if(left.number[i] > tmp.number[i])
                return 1;
            else if(left.number[i] < tmp.number[i])
                return 2;
        }
        return 0;
    }
    else if(left.decimals < right.decimals) {
        BigFloat tmp;
        tmp = left;
        while(tmp.decimals < right.decimals) {
            tmp.decimals++;
            tmp.number.push_front('0');
        }

        for(int i = tmp.number.size() - 1; i >= 0; i--) {
            if(tmp.number[i] > right.number[i])
                return 1;
            else if(tmp.number[i] < right.number[i])
                return 2;
        }
        return 0;
    }
    else {
        for(int i = left.number.size() - 1; i >= 0; i--) {
            if(left.number[i] > right.number[i])
                return 1;
            else if(left.number[i] < right.number[i])
                return 2;
        }
        return 0;
    }
};

//Operations without sign and decimals, utilized by Operations
BigFloat BigFloat::Sum(const BigFloat& left, const BigFloat& right)
{
    BigFloat tmp;
    int carry = 0;
    size_t loopsize = (left.number.size() > right.number.size()) ? left.number.size() : right.number.size();

    for(size_t i = 0; i < loopsize; ++i) {
        int val1, val2;
        val1 = (i > left.number.size() - 1) ? 0 : CharToInt(left.number[i]);
        val2 = (i > right.number.size() - 1) ? 0 : CharToInt(right.number[i]);

        int aus = val1 + val2 + carry;

        carry = 0;
        if(aus > 9) {
            carry = 1;
            aus = aus - 10;
        }

        tmp.number.push_back(IntToChar(aus));
    }
    if(carry != 0)
        tmp.number.push_back(IntToChar(carry));

    return tmp;
};

BigFloat BigFloat::Subtract(const BigFloat& left, const BigFloat& right)
{
    BigFloat tmp;
    int carry = 0;
    int aus;

    for(size_t i = 0; i < left.number.size(); ++i) {
        int val1, val2;
        val1 = CharToInt(left.number[i]);
        val2 = (i > right.number.size() - 1) ? 0 : CharToInt(right.number[i]);

        val1 -= carry;

        if(val1 < val2) {
            aus = 10 + val1 - val2;
            carry = 1;
        }
        else {
            aus = val1 - val2;
            carry = 0;
        }

        tmp.number.push_back(IntToChar(aus));
    }

    return tmp;
};


BigFloat BigFloat::Multiply(const BigFloat& left, const BigFloat& right)
{
    BigFloat ris;
    BigFloat tmp;
    ris.number.push_back('0');
    int carry = 0;

    for(size_t i = 0; i < right.number.size(); ++i) {
        for(size_t k = 0; k < i; ++k) {
            tmp.number.push_front('0');
        }

        for(size_t j = 0; j < left.number.size(); ++j) {
            int aus = CharToInt(right.number[i]) * CharToInt(left.number[j]) + carry;
            carry = 0;
            if(aus > 9) {
                while(aus > 9) {
                    carry++;
                    aus -= 10;
                }
            }
            tmp.number.push_back(IntToChar(aus));
        }

        if(carry != 0)
            tmp.number.push_back(IntToChar(carry));
        carry = 0;

        ris = Sum(ris, tmp);
        tmp.number.clear();
    }

    return ris;
};

BigFloat BigFloat::Pow(const BigFloat& left, const BigFloat& right)
{
    if(right == 0)
        return 1;
    else if(right % 2 == 0)
        return BigFloat::Pow(left, right / 2) * BigFloat::Pow(left, right / 2);
    else
        return left * BigFloat::Pow(left, right / 2) * BigFloat::Pow(left, right / 2);
};

//------------------------Public Methods--------------------------------

//Assignment operators
BigFloat& BigFloat::operator=(const char* strNum)
{
    number.clear();
    decimals = 0;
    sign = '\0';
    error = 0;

    int count = 0;
    if(strNum[count] == '+') {
        sign = '+';
        count++;
    }
    else if(strNum[count] == '-') {
        sign = '-';
        count++;
    }
    else if(isdigit(strNum[count]))
        sign = '+';
    else {
        error = 1;
        error_code = "Unset";
        return *this;
    }

    bool start_dec = false;

    while(strNum[count] != '\0') {
        if(!start_dec)
            if(strNum[count] == '.') {
                if(number.empty()) {
                    sign = '\0';
                    error = 1;
                    error_code = "Unset";
                    return *this;
                }
                start_dec = true;
                count++;
            }

        if(isdigit(strNum[count])) {
            number.push_front(strNum[count]);
            count++;
            if(start_dec)
                decimals++;
        }
        else {
            sign = '\0';
            number.clear();
            decimals = 0;
            error = 1;
            error_code = "Unset";
            return *this;
        }
    }
    this->LeadTrim();
    return *this;
};

BigFloat& BigFloat::operator=(std::string strNum)
{
    *this = strNum.c_str();
    return *this;
};

BigFloat& BigFloat::operator=(int Num)
{
  std::ostringstream stm ;
  stm << Num;
  *this = stm.str();
  return *this;
};

BigFloat& BigFloat::operator=(double Num)
{
  std::ostringstream stm ;
  stm << Num;
  *this = stm.str();
  return *this;
};

BigFloat operator-(const BigFloat& left_, const BigFloat& right_)
{
    BigFloat tmp;
    if((left_.error) || (right_.error)) {
        return tmp;
    }

    BigFloat left, right;
    left = left_;
    right = right_;

    if(left.decimals > right.decimals)
        while(left.decimals > right.decimals) {
            right.decimals++;
            right.number.push_front('0');
        }
    else if(left.decimals < right.decimals)
        while(left.decimals < right.decimals) {
            left.decimals++;
            left.number.push_front('0');
        }

    if((left.sign == '+') && (right.sign == '-')) {
        tmp = BigFloat::Sum(left, right);
        tmp.sign = '+';
        tmp.decimals = left.decimals;
        tmp.error = 0;
        return tmp;
    }
    if((left.sign == '-') && (right.sign == '+')) {
        tmp = BigFloat::Sum(left, right);
        tmp.sign = '-';
        tmp.decimals = left.decimals;
        tmp.error = 0;
        return tmp;
    }

    if((left.sign == '+') && (right.sign == '+')) {
        int check = BigFloat::CompareNum(left, right);
        if(check == 0) {
            tmp = 0;
            return tmp;
        }
        if(check == 1) {
            tmp = BigFloat::Subtract(left, right);
            tmp.sign = '+';
            tmp.decimals = left.decimals;
            tmp.LeadTrim();
            tmp.error = 0;
            return tmp;
        }
        if(check == 2) {
            tmp = BigFloat::Subtract(right, left);
            tmp.sign = '-';
            tmp.decimals = left.decimals;
            tmp.LeadTrim();
            tmp.error = 0;
            return tmp;
        }
    }

    if((left.sign == '-') && (right.sign == '-')) {
        int check = BigFloat::CompareNum(left, right);
        if(check == 0) {
            tmp = 0;
            return tmp;
        }
        if(check == 1) {
            tmp = BigFloat::Subtract(left, right);
            tmp.sign = '-';
            tmp.decimals = left.decimals;
            tmp.LeadTrim();
            tmp.error = 0;
            return tmp;
        }
        if(check == 2) {
            tmp = BigFloat::Subtract(right, left);
            tmp.sign = '+';
            tmp.decimals = left.decimals;
            tmp.LeadTrim();
            tmp.error = 0;
            return tmp;
        }
    }

    return tmp; //all cases are covered above, this is only to prevent compiler warnings
};


BigFloat operator*(const BigFloat& left, const BigFloat& right)
{
    BigFloat tmp;
    if((left.error) || (right.error)) {
        return tmp;
    }

    tmp = BigFloat::Multiply(left, right);
    if(((left.sign == '-') && (right.sign == '-')) || ((left.sign == '+') && (right.sign == '+')))
        tmp.sign = '+';
    else
        tmp.sign = '-';

    tmp.decimals = left.decimals + right.decimals;
    tmp.error = 0;
    tmp.LeadTrim();

    return tmp;
};

BigFloat operator*(const BigFloat& left, const int& int_right)
{
    BigFloat right;
    right = int_right;
    return left * right;
};


BigFloat operator/(const BigFloat& left, const BigFloat& right)
{
    BigFloat tmp;

    if((left.error) || (right.error)) {
        return tmp;
    }

    BigFloat Q, R, D, N, zero;
    zero = 0;

    if(right == zero) {
        tmp.error_code = "Division For 0";
        return tmp;
    }

    N = (left > zero) ? (left) : (left * (-1));
    D = (right > zero) ? (right) : (right * (-1));
    R.sign = '+';
    R.error = 0;

    while((N.decimals != 0) || (D.decimals != 0)) {
        if(N.decimals == 0)
            N.number.push_front('0');
        else
            N.decimals--;

        if(D.decimals == 0)
            D.number.push_front('0');
        else
            D.decimals--;
    }
    N.LeadTrim();
    D.LeadTrim();

    //Increase Precision to highest decimal quote
    int div_precision = (left.decimals > right.decimals) ? (left.decimals) : (right.decimals);
    for(int i = 0; i < div_precision; i++)
        N.number.push_front('0');

    int check = BigFloat::CompareNum(N, D);

    if(check == 0) {
        tmp.number.push_front('1');
    }
    if(check == 2) {
        return zero;
    }
    else {
        while(!N.number.empty()) {
            R.number.push_front(*(N.number.rbegin()));
            N.number.pop_back();

            bool is_zero = true;
            std::deque<char>::const_iterator zero_iter = R.number.begin();
            for(; zero_iter != R.number.end(); ++zero_iter)
                if(*zero_iter != '0')
                    is_zero = false;

            if((R >= D) && (!is_zero)) {
                int Q_sub = 0;
                int min = 0;
                int max = 9;

                while(R >= D) {
                    int avg = max - min;
                    int mod_avg = avg / 2;
                    avg = (avg - mod_avg * 2) ? (mod_avg + 1) : (mod_avg);

                    int div_check = BigFloat::CompareNum(R, D * avg);

                    if(div_check == 2) {
                        max = avg;
                    }
                    else {
                        Q_sub = Q_sub + avg;
                        R = R - D * avg;

                        max = 9;
                    }
                }

                Q.number.push_front(BigFloat::IntToChar(Q_sub));

                bool is_zero = true;
                std::deque<char>::const_iterator zero_iter = R.number.begin();
                for(; zero_iter != R.number.end(); ++zero_iter)
                    if(*zero_iter != '0')
                        is_zero = false;
                if(is_zero)
                    R.number.clear();

            }
            else {
                Q.number.push_front('0');
            }
        }
        tmp = Q;
    }

    if(((left.sign == '-') && (right.sign == '-')) || ((left.sign == '+') && (right.sign == '+')))
        tmp.sign = '+';
    else
        tmp.sign = '-';

    tmp.decimals = div_precision;
    tmp.error = 0;
    tmp.LeadTrim();

    return tmp;
};

BigFloat operator/(const BigFloat& left, const int& int_right)
{
    BigFloat right;
    right = int_right;
    return left / right;
};


BigFloat operator%(const BigFloat& left, const BigFloat& right)
{
    BigFloat tmp;

    if((left.error) || (right.error)) {
        return tmp;
    }

    if((left.decimals != 0) || (right.decimals != 0)) {
        tmp.error_code = "Modulus Between Non Integers";
        return tmp;
    }

    BigFloat Q, R, D, N, zero, ret;
    zero = 0;

    if(right == zero) {
        tmp.error_code = "Modulus For 0";
        return tmp;
    }

    N = (left > zero) ? (left) : (left * (-1));
    D = (right > zero) ? (right) : (right * (-1));
    R.sign = '+';
    R.error = 0;

    int check = BigFloat::CompareNum(N, D);

    if(check == 0) {
        return zero;
    }
    if(check == 2) {
        return left;
    }
    else {
        while(!N.number.empty()) {
            R.number.push_front(*(N.number.rbegin()));
            N.number.pop_back();

            bool is_zero = true;
            std::deque<char>::const_iterator zero_iter = R.number.begin();
            for(; zero_iter != R.number.end(); ++zero_iter)
                if(*zero_iter != '0')
                    is_zero = false;

            if((R >= D) && (!is_zero)) {
                int Q_sub = 0;
                int min = 0;
                int max = 9;

                while(R >= D) {
                    int avg = max - min;
                    int mod_avg = avg / 2;
                    avg = (avg - mod_avg * 2) ? (mod_avg + 1) : (mod_avg);

                    int div_check = BigFloat::CompareNum(R, D * avg);

                    if(div_check == 2) {
                        max = avg;
                    }
                    else {
                        Q_sub = Q_sub + avg;
                        R = R - D * avg;

                        max = 9;
                    }
                }

                Q.number.push_front(BigFloat::IntToChar(Q_sub));
                ret = R;

                bool is_zero = true;
                std::deque<char>::const_iterator zero_iter = R.number.begin();
                for(; zero_iter != R.number.end(); ++zero_iter)
                    if(*zero_iter != '0')
                        is_zero = false;
                if(is_zero)
                    R.number.clear();
            }
            else {
                ret = R;
                Q.number.push_front('0');
            }
        }

        Q.LeadTrim();
        ret.LeadTrim();
        tmp = ret;
    }

    if(((left.sign == '-') && (right.sign == '-')) || ((left.sign == '+') && (right.sign == '+')))
        tmp.sign = '+';
    else
        tmp.sign = '-';

    if(!BigFloat::CompareNum(tmp, zero))
        tmp.sign = '+';

    tmp.error = 0;
    return tmp;
};

BigFloat operator%(const BigFloat& left, const int& int_right)
{

    BigFloat right;
    right = int_right;
    return left % right;
};


//Comparators
bool BigFloat::operator== (const BigFloat& right) const
{
    if((error) || (right.error))
        return false;

    int check = CompareNum(*this, right);
    if((check == 0) && (sign == right.sign))
        return true;
    return false;
};

bool BigFloat::operator== (const int& int_right) const
{
    BigFloat right(int_right);
    return *this == right;
};


bool BigFloat::operator!= (const BigFloat& right) const
{
    if((error) || (right.error))
        return false;

    return !(*this == right);
};

bool BigFloat::operator!= (const int& int_right) const
{
    BigFloat right(int_right);
    return *this != right;
};

bool BigFloat::operator> (const BigFloat& right) const
{
    if((error) || (right.error))
        return false;

    if(((sign == '+') && (right.sign == '+'))) {
        int check = CompareNum(*this, right);
        if(check == 1)
            return true;
        return false;
    }
    if(((sign == '-') && (right.sign == '-'))) {
        int check = CompareNum(*this, right);
        if(check == 2)
            return true;
        return false;
    }
    if(((sign == '-') && (right.sign == '+')))
        return false;
    if(((sign == '+') && (right.sign == '-')))
        return true;

    return false; //all cases are covered above, this is only to prevent compiler warnings
};


bool BigFloat::operator>= (const BigFloat& right) const
{
    if((error) || (right.error))
        return false;
    return !(*this < right);
};

bool BigFloat::operator< (const BigFloat& right) const
{
    if((error) || (right.error))
        return false;

    if(((sign == '+') && (right.sign == '+'))) {
        int check = CompareNum(*this, right);
        if(check == 2)
            return true;
        return false;
    }
    if(((sign == '-') && (right.sign == '-'))) {
        int check = CompareNum(*this, right);
        if(check == 1)
            return true;
        return false;
    }
    if(((sign == '-') && (right.sign == '+')))
        return true;
    if(((sign == '+') && (right.sign == '-')))
        return false;

    return false; //all cases are covered above, this is only to prevent compiler warnings
};


std::string BigFloat::ToString() const
{
    std::string var;
    std::stringstream ss;

    if(error) {
        var = "nan";
        return var;
    }
    if(sign == '-') {
        ss << sign;
    }
    int s = number.size() - 1;

    if (number[s] == '0' && s == decimals) {
      ss << ".";
      s--;
    }

    for(int i = s; i >= 0; i--) {
        ss << number[i];
        if((i == decimals) && (i != 0))
            ss << ".";
    }
    ss >> var;
    return var;
};

//Remove leading zeros of numbers, utilized by Operations without sign
void BigFloat::LeadTrim()
{
    for(int i = number.size() - 1; i > decimals; --i) {
        if(number[i] == '0')
            number.pop_back();
        else
            break;
    }
};

//Remove non significant trailing zeros
void BigFloat::TrailTrim()
{
    if(!error)
        while((number[0] == '0') && (decimals > 0)) {
            number.pop_front();
            decimals--;
        }
};



using namespace std;



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  double r;
  int n;
  while (!cin.eof()) {
    cin >> r;
    if (cin.eof()) break;
    cin >> n;

    BigFloat bf = BigFloat::Pow(BigFloat(r), n);
    bf.TrailTrim();

    cout << bf.ToString() << endl;
  }

  return 0;
}
