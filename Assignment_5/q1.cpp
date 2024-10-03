#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Expr {
private:
    string exprStr;

    int applyOperation(int left, int right, char op) {
        switch (op) {
            case '+': return left + right;
            case '-': return left - right;
            case '*': return left * right;
            case '/': return left / right;
        }
        return 0;
    }

    int processExpression() {
        stack<int> operands;     
        stack<char> operators; 
        
        for (int i = 0; i < exprStr.length(); i++) {
            char currChar = exprStr[i];

            if (isdigit(currChar)) {
                operands.push(currChar - '0');
            }
            else if (currChar == '+' || currChar == '-' || currChar == '*' || currChar == '/') {
                // Perform operations for * and / first, then push other operators
                while (!operators.empty() && (operators.top() == '*' || operators.top() == '/')) {
                    int right = operands.top(); operands.pop();
                    int left = operands.top(); operands.pop();
                    char op = operators.top(); operators.pop();
                    operands.push(applyOperation(left, right, op));
                }
                operators.push(currChar);
            }
        }

        while (!operators.empty()) {
            int right = operands.top(); operands.pop();
            int left = operands.top(); operands.pop();
            char op = operators.top(); operators.pop();
            operands.push(applyOperation(left, right, op));
        }

        return operands.top();
    }

public:
    Expr(const char* expr) : exprStr(expr) {}
    int eval() {
        return processExpression();
    }
    void print() {
        cout << "Expression: " << exprStr << endl;
    }
};

int main() {
    Expr expr("8/4+3*4-3");
    std::cout << "Result = " << expr.eval() << "\n";
    expr.print();
    return 0;
}
