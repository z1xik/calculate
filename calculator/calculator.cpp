#include "calculator.h"
#include "validator.h"


namespace {
    int add(int lhs,int rhs){
        return lhs + rhs;
    }
    int sub(int lhs,int rhs){
        return lhs - rhs;
    }
    int div(int lhs,int rhs){

        return lhs / rhs;
    }
    int mul(int lhs,int rhs){
        return lhs * rhs;
    }
    std::map<char, std::function<int(int,int)>> operation = {
        {'+',add},
        {'-',sub},
        {'*',mul},
        {'/',div}
    };
}








namespace calculator {

Calculator::Calculator(QObject *parent)
    : QObject{parent}
{}

QString Calculator::calculate(const QString &input)
{
    std::string valid_string = validator::validate(input.toStdString());
    if (valid_string.size() !=3){
        return {"Ban"};
    }
    int lhs = std::atoi(&valid_string[0]);
    int rhs = std::atoi(&valid_string[2]);
    if (valid_string[1]!='+' and valid_string[1]!='-' and valid_string[1]!='*' and valid_string[1]!='/' )
        return "BAN2.0";

    // if (valid_string[1] == '/' and valid_string[3] == 0)
    //     return "ban div";

    int result = operation[valid_string[1]](lhs,rhs);

    return QString::number(result);
}
} // namespace calculator
