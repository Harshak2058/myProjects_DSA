#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Function to check if a character is an operator
bool isOperator(string s) {
    return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
}

// Function to check precedence of operators
int precedence(string s) {
    if (s == "^") return 3;
    if (s == "*" || s == "/") return 2;
    if (s == "+" || s == "-") return 1;
    return -1;
}

// Function to reverse the string and change parentheses
string reverseAndReplace(const string& exp) {
    string reversed;
    for (int i = exp.size() - 1; i >= 0; --i) {
        if (exp[i] == '(') reversed += ')';
        else if (exp[i] == ')') reversed += '(';
        else reversed += exp[i];
    }
    return reversed;
}

// Function to convert infix to postfix
string infixToPostfix(const string& infix) {
    stack<string> s;
    string postfix;
    
    // Iterate through the infix expression
    for (int i = 0; i < infix.size(); ++i) {
        string token = infix.substr(i, 1);
        
        // If token is operand (alphanumeric), append to postfix
        if (isalnum(token[0])) {
            postfix += token;
        } else if (token == "(") {
            s.push(token);
        } else if (token == ")") {
            while (!s.empty() && s.top() != "(") {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // pop '('
        } else if (isOperator(token)) { // If token is operator
            while (!s.empty() && s.top() != "(" && precedence(s.top()) >= precedence(token)) {
                postfix += s.top();
                s.pop();
            }
            s.push(token);
        }
    }
    
    // Pop remaining operators from stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}

// Function to convert infix to prefix
string infixToPrefix(const string& infix) {
    stack<string> s;
    string postfix = infixToPostfix(reverseAndReplace(infix)); // Convert reversed infix to postfix
    
    // Reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());
    
    return postfix;
}

// Function to convert postfix to prefix
string postfixToPrefix(const string& postfix) {
    stack<string> s;
    
    // Iterate through the postfix expression
    for (int i = 0; i < postfix.size(); ++i) {
        string token = postfix.substr(i, 1);
        
        // If token is operand (alphanumeric), push to stack
        if (isalnum(token[0])) {
            s.push(token);
        } else if (isOperator(token)) { // If token is operator
            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();
            string expression = token + operand1 + operand2;
            s.push(expression);
        }
    }
    
    // Top of stack contains prefix expression
    return s.top();
}

int main() {
    string infix = "(a-b/c)*(a/k-l)";
    string postfix = "abc/-ak/l-*";

    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;

    string prefixFromInfix = infixToPrefix(infix);
    cout << "Prefix (from infix): " << prefixFromInfix << endl;

    string prefixFromPostfix = postfixToPrefix(postfix);
    cout << "Prefix (from postfix): " << prefixFromPostfix << endl;

    return 0;
}
