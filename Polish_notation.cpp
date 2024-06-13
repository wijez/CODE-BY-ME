#include<bits/stdc++.h>
using namespace std;
// Hàm để kiểm tra xem một ký tự có phải là toán tử nhị phân hay không
bool is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Hàm để tính giá trị của một toán tử nhị phân với hai toán hạng
int evaluate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

// Hàm để chuyển đổi một biểu thức số học từ kí pháp trung tố sang kí pháp ba lan
// Sử dụng một ngăn xếp để lưu trữ các toán tử và một chuỗi để lưu trữ kết quả
string infix_to_postfix(string infix) {
    stack<char> operators; // ngăn xếp các toán tử
    string postfix = ""; // chuỗi kết quả
    for (char c : infix) { // duyệt qua từng ký tự của biểu thức trung tố
        if (isdigit(c)) { // nếu là số, thêm vào chuỗi kết quả
            postfix += c;
        }
        else if (is_operator(c)) { // nếu là toán tử, xử lý theo thứ tự ưu tiên
            while (!operators.empty() && is_operator(operators.top()) && operators.top() != '(') {
                // nếu ngăn xếp không rỗng và đỉnh ngăn xếp là toán tử và không phải dấu ngoặc mở
                // thì lấy ra đỉnh ngăn xếp và thêm vào chuỗi kết quả
                postfix += operators.top();
                operators.pop();
            }
            // sau đó đẩy toán tử hiện tại vào ngăn xếp
            operators.push(c);
        }
        else if (c == '(') { // nếu là dấu ngoặc mở, đẩy vào ngăn xếp
            operators.push(c);
        }
        else if (c == ')') { // nếu là dấu ngoặc đóng, xử lý các toán tử trong ngoặc
            while (!operators.empty() && operators.top() != '(') {
                // lấy ra các toán tử trong ngoặc và thêm vào chuỗi kết quả
                postfix += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                // lấy ra dấu ngoặc mở và bỏ qua nó
                operators.pop();
            }
        }
    }
    while (!operators.empty()) { // xử lý các toán tử còn lại trong ngăn xếp
        postfix += operators.top();
        operators.pop();
    }
    return postfix; // trả về chuỗi kết quả
}

// Hàm để tính giá trị của biểu thức kí pháp ba lan
int evaluate_postfix(string postfix) {
    stack<int> operands; // ngăn xếp các toán hạng
    int result = 0; // biến kết quả
    for (char c : postfix) { // duyệt qua từng ký tự của biểu thức ba lan
        if (isdigit(c)) { // nếu là số, đẩy vào ngăn xếp
            operands.push(c - '0'); // chuyển từ ký tự sang số
        }
        else if (is_operator(c)) { // nếu là toán tử, xử lý hai toán hạng ở đỉnh ngăn xếp
            if (operands.size() >= 2) { // nếu ngăn xếp có ít nhất hai toán hạng
                int b = operands.top(); // lấy ra toán hạng thứ hai
                operands.pop();
                int a = operands.top(); // lấy ra toán hạng thứ nhất
                operands.pop();
                result = evaluate(a, b, c); // tính giá trị của toán tử với hai toán hạng
                operands.push(result); // đẩy kết quả vào ngăn xếp
            }
            else {
                return 0; // nếu ngăn xếp không đủ hai toán hạng, trả về 0
            }
        }
    }
    if (operands.size() == 1) { // nếu ngăn xếp chỉ còn một toán hạng
        result = operands.top(); // lấy ra kết quả cuối cùng
    }
    return result; // trả về kết quả
}

// Hàm main để chạy code trên
int main() {
    string infix; // biến lưu biểu thức trung tố
    cout << "Enter an arithmetic expression: "; // in ra màn hình yêu cầu nhập biểu thức
    cin >> infix; // nhập biểu thức từ bàn phím
    string postfix = infix_to_postfix(infix); // chuyển đổi biểu thức sang kí pháp ba lan
    cout << "The postfix expression is: " << postfix << endl; // in ra màn hình biểu thức ba lan
    int result = evaluate_postfix(postfix); // tính giá trị của biểu thức ba lan
    cout << "The value of the expression is: " << result << endl; // in ra màn hình giá trị của biểu thức
    return 0; // kết thúc chương trình
}